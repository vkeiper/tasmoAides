# tasmoAides

# Shelly OTA to MongoseOs then to Tasmota
 http://YOUR_SHELLY_IP/ota?url=http://dl.dasker.eu/firmware/mg2tasmota-Shelly1.zip
 
 
 
 ## PIR Sensor on Shelly\Tas that does not diectly control relay.
 #### 1st lets remove the relay control from the switch event. "switchtopicN 0"
 Where N is the switch index number the PIR sensor is wired to. "switchtopic 0" means 
 no MQTT msg goes out from switch event. But we will set a rule that will publish an mqtt msg when the 
 switchstate=1 and then another message after a timer expires. This resets the PIR binary snesor in HASSIO.
 
 backlog rule1 on switch1#state=1 do backlog publish stat/%topic%/PIR1/state ON; RuleTimer1 5 endon on Rules#Timer=1 do publish stat/%topic%/PIR1/state OFF endon; rule1 1

### This rule turns the relay on within this shelly and then shuts it off after a timeout period.
Rule2   ON power1#state=1 DO Backlog publish cmnd/%topic%/POWER 1; RuleTimer1 120 ENDON   ON Rules#Timer=1 DO publish cmnd/%topic%/POWER 0 ENDON

#### Turn on this ShellyTas and another ShellyTas when switch1#state = '2' toggle
Rule2 ON switch1#state=2 DO Backlog publish cmnd/tasmota_C4F6A4/POWER 1; publish cmnd/tasmota_C4FB84/POWER 1; RuleTimer2 20 ENDON   ON Rules#Timer=2 DO Backlog publish cmnd/tasmota_C4F6A4/POWER 0; publish cmnd/tasmota_C4FB84/POWER 0 ENDON

#### If we are turned on by RF PIRs then set turn off timer
Rule3 ON power#state=1 DO Backlog publish cmnd/%topic%/POWER 1; RuleTimer3 20 ENDON ON Rules#Timer=3 DO publish cmnd/%topic%/POWER 0 ENDON


#### Mqtt topics used
- Last Will & Testament  
tele/tasmota_C4F6A4/LWT   
- PIR state topic
stat/tasmota_C4F6A4/PIR1/state   
- Relay On Command
cmnd/tasmota_C4F6A4/POWER 1   

#### 1 make discovery possible
setoption19 1
 
 #### 2 Stop Burning Power Up counts to flash
 backlog setoption0 0; setoption36 1
 
 
