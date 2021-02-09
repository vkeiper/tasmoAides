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

# set relay on this tasmo ON, publish POWER1 1 to CAEACC, then 10 secs later turn off this relay, pushish POWER1 0 to C4EACC
Rule1   ON switch2#state DO Backlog Power1 on; publish cmnd/shtas_C4EACC/POWER1 1; RuleTimer1 10 ENDON   ON Rules#Timer=1 DO Backlog Power1 off; publish cmnd/shtas_C4EACC/POWER1 0 ENDON 

# when power1 relay turn on publish binary sensor into to mqtt YES, then 5 seconds later publish NO
Rule2   ON power1#state=1 DO Backlog publish stat/%topic%/PIR1/state YES; RuleTimer2 5 ENDON ON Rules#Timer=2 DO publish stat/%topic%/PIR1/state NO ENDON

# START Group - Stair Light Switches and Motion sensors 

# START Foyer Motion & Switch - MAC C4FB8A (IP 117)
# This one switches itself and then th Upstairs Hall switch
# set relay on this tasmo ON, publish POWER1 1 to CAEACC, then 10 secs later turn off this relay, pushish POWER1 0 to C4EACC
Rule1   ON switch2#state DO Backlog Power1 on; publish cmnd/shtas_C4EACC/POWER1 1;publish stat/%topic%/PIR1/state YES; RuleTimer1 10 ENDON   ON Rules#Timer=1 DO Backlog Power1 off; publish cmnd/shtas_C4EACC/POWER1 0 ENDON 

# when power1 relay turn on publish binary sensor into to mqtt YES, then 5 seconds later publish NO
Rule2   ON power1#state=1 DO RuleTimer2 5 ENDON ON Rules#Timer=2 DO publish stat/%topic%/PIR1/state NO ENDON
# END Foyer Motion & Switch

# START Upstairs Hall Motion & Switch - MAC C4EACC (IP 189)
# This one switches itself and then th Upstairs Hall switch
# set relay on this tasmo ON, publish POWER1 1 to CAFB8A, then 10 secs later turn off this relay, pushish POWER1 0 to C4FB8A
Rule1   ON switch2#state DO Backlog Power1 on; publish cmnd/shtas_C4FB84/POWER1 1;publish stat/%topic%/PIR1/state YES; RuleTimer1 10 ENDON   ON Rules#Timer=1 DO Backlog Power1 off; publish cmnd/shtas_C4FB84/POWER1 0 ENDON 

# when power1 relay turn on publish binary sensor into to mqtt YES, then 5 seconds later publish NO
Rule2   ON power1#state=1 DO RuleTimer2 5 ENDON ON Rules#Timer=2 DO publish stat/%topic%/PIR1/state NO ENDON
# END Upstairs Hall Motion & Switch

# END Group - Stair Light Switches and Motion sensors 


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
 
 ### Flash Reset
 Reset 4 resets all cfg but leaves Wifi parameters
 
 
 
 
