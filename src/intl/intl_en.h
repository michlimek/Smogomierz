/*
 *  
 *  translation file - english translation
 *  
 */

#pragma once

char EN_INTL_LANG[16] PROGMEM = "en";

char EN_INTL_INDEX_PAGE[16] PROGMEM = "Measurements";
char EN_INTL_CONFIG_PAGE[16] PROGMEM = "Settings";

char EN_INTL_CONFIG_DEVICE_PAGE[32] PROGMEM = "Device Settings";
char EN_INTL_CONFIG_INFO_DEVICE_PAGE[256] PROGMEM = "The choice of sensors connected to Smogly, the frequency of measurements, or the language of the web interface can be changed in the section";
char EN_INTL_CONFIG_SERVICES_PAGE[32] PROGMEM = "Services Settings";
char EN_INTL_CONFIG_INFO_SERVICES_PAGE[256] PROGMEM = "Settings of such services as Luftdaten, aqi.eco, Smoglist, AirMonitor, ThingSpeak or InfluxDB or MQTT services can be changed in the section";

char EN_INTL_UPDATE_PAGE[16] PROGMEM = "Update";

char EN_INTL_WEATHER[16] PROGMEM = "Weather";
char EN_INTL_TEMPERATURE[16] PROGMEM = "Temperature";
char EN_INTL_HUMIDITY[16] PROGMEM = "Humidity";
char EN_INTL_PRESSURE[16] PROGMEM = "Pressure";
char EN_INTL_DEWPOINT[16] PROGMEM = "Dewpoint";

char EN_INTL_AIRPOLLUTION[32] PROGMEM = "Air pollution";
char EN_INTL_SAVED[16] PROGMEM = "SAVED!";

char EN_INTL_POSTCONFIG_INFO[64] PROGMEM = "everything looks OK, in a moment the Smogly will restart";
char EN_INTL_INSTRUCIONSLINK[80] PROGMEM = "All instructions and descriptions[in polish] are available {GITHUB_LINK}.";
char EN_INTL_DEVICENAME[32] PROGMEM = "Device Name";
char EN_INTL_DEVICENAMEAUTO[32] PROGMEM = "Automatic name generation";
char EN_INTL_SELECTEDLANGUAGE[16] PROGMEM = "Language";
char EN_INTL_TEMPHUMIPRESSSENSOR[64] PROGMEM = "Temp/Humi/Press Sensor";
char EN_INTL_PMSENSOR[32] PROGMEM = "PM2.5/PM10 Sensor";

char EN_INTL_FREQUENTMEASUREMENTONOFF[32] PROGMEM = "Continuous measurements";
char EN_INTL_FREQUENTMEASUREMENTINFO[96] PROGMEM = "Continuous measurements significantly shorten the life span of the PM sensor.";
char EN_INTL_MEASUREMENTFREQUENCY[32] PROGMEM = "Make PM measurements every";
char EN_INTL_AVERAGELASTRESULT[32] PROGMEM = "Average result from last";
char EN_INTL_PMMEASUREMENTS[32] PROGMEM = "PM measurements";
char EN_INTL_SENDINGINTERVAL[64] PROGMEM = "Sending data to external services every";
char EN_INTL_SERVICESSENDINGINTERVAL[128] PROGMEM = "Sending data to AirMonitor/Luftdaten/Smoglist/aqi.eco every";
char EN_INTL_DBSENDINGINTERVAL[64] PROGMEM = "Sending data to ThingSpeak/InfluxDB/MQTT every";
char EN_INTL_SECONDS[16] PROGMEM = "seconds";
char EN_INTL_MINUTES[16] PROGMEM = "minutes";

char EN_INTL_DEEPSLEEPINFO[544] PROGMEM = "DeepSleep put the device into deep sleep between a series of measurements - significantly lower energy consumption (the possibility of working on the battery for several weeks), but lack of continuous access to the web interface. The web interface will only be available for about {INTERFACEWWWONTIME} seconds every {SENDING_FREQUENCY} minutes (and right after the device reboots). Sleep time will be the same as the period for sending measurements to external services. DeepSleep requires connection of D0 and RST pins on ESP8266!";
char EN_INTL_DEEPSLEEPINFO_ESP32[544] PROGMEM = "DeepSleep put the device into deep sleep between a series of measurements - significantly lower energy consumption (the possibility of working on the battery for several weeks), but lack of continuous access to the web interface. The web interface will only be available for about {INTERFACEWWWONTIME} seconds every {SENDING_FREQUENCY} minutes (and right after the device reboots). Sleep time will be the same as the period for sending measurements to external services.";

char EN_INTL_DISPLAYPM1[32] PROGMEM = "Display of PM1 measurements";
char EN_INTL_ALTITUDEINFO[128] PROGMEM = "Altitude above sea level (required for correct pressure measurements. You can check it {WSPOLRZEDNE_GPS_LINK})";

char EN_INTL_SECURECONFIGUPDATEPAGE[96] PROGMEM = "Secure the Configuration and Update pages(default: admin/password)";
char EN_INTL_SECURELOGIN[16] PROGMEM = "Login";
char EN_INTL_SECUREPASSWD[16] PROGMEM = "Password";
char EN_INTL_SECURELOGOUTINFO[64] PROGMEM = "Restart your web browser to log out!";

char EN_INTL_LUFTDATENSENDING[96] PROGMEM = "Sending data to the {LUFTDATEN_LINK} service(requires registration at {LUFTDATENFORM_LINK})"; 

char EN_INTL_SMOGLISTSENDING[64] PROGMEM = "Sending data to the {SMOGLIST_LINK} service";
char EN_INTL_SMOGLISTINFO[256] = "Smoglist is a service that collects Smogly usage statistics(we do not collect logins and passwords). It will allow us to improve the most commonly used functions in the future and generate our own charts.";

char EN_INTL_AIRMONITORSENDING[128] PROGMEM = "Sending data to the {AIRMONITOR_LINK} service(requires filling out {AIRMONITORFORM_LINK}; Sensor: e.g. {PMSENSORMODEL})";
char EN_INTL_AIRMONITORCHARTS[64] PROGMEM = "Displaying charts from the AirMonitor site";
char EN_INTL_AIRMONITORCOORDINATESINFO[80] PROGMEM = "Geographical coordinates(you can check it {LATLONG_LINK})";
char EN_INTL_AIRMONITORLATITUDE[32] PROGMEM = "Latitude";
char EN_INTL_AIRMONITORLONGITUDE[32] PROGMEM = "Longitude";

char EN_INTL_THINGSPEAKSENDING[64] PROGMEM = "Sending data to the {THINGSPEAK_LINK} service:";
char EN_INTL_THINGSPEAKCHARTS[64] PROGMEM = "Displaying charts from the ThingSpeak site";
char EN_INTL_THINGSPEAK_WRITE_API_KEY[32] PROGMEM = "ThingSpeak Write API Key";
char EN_INTL_THINGSPEAKCHANNELID[32] PROGMEM = "ThingSpeak Channel ID";
char EN_INTL_THINGSPEAK_READ_API_KEY[32] PROGMEM = "ThingSpeak Read API Key";

char EN_INTL_INFLUXDBSENDING[64] PROGMEM = "Sending data to the InfluxDB";
char EN_INTL_INFLUXDBVERSION[32] PROGMEM = "InfluxDB version";
char EN_INTL_INFLUXDBSERVER[64] PROGMEM = "InfluxDB database address";
char EN_INTL_INFLUXDBPORT[32] PROGMEM = "InfluxDB port";
char EN_INTL_INFLUXDBNAME[32] PROGMEM = "Name of the database";
char EN_INTL_INFLUXDBUSER[32] PROGMEM = "Database user";
char EN_INTL_INFLUXDBPASSWD[32] PROGMEM = "Database password";
char EN_INTL_INFLUXDBORG[32] PROGMEM = "Organization";
char EN_INTL_INFLUXDBBUCKET[32] PROGMEM = "Bucket";
char EN_INTL_INFLUXDBTOKEN[32] PROGMEM = "Token";

char EN_INTL_CONFIG_ADV_MQTT[32] PROGMEM = "Advanced MQTT Configuration";
char EN_INTL_MQTTSENDING[64] PROGMEM = "Sending data to the MQTT server";
char EN_INTL_MQTTSERVER[32] PROGMEM = "MQTT server address";
char EN_INTL_MQTTPORT[32] PROGMEM = "MQTT port";
char EN_INTL_MQTTUSER[32] PROGMEM = "MQTT user";
char EN_INTL_MQTTPASSWD[32] PROGMEM = "MQTT password";

char EN_INTL_MQTT_IP_IN_TOPIC[32] PROGMEM = "IP address in topic";
char EN_INTL_MQTT_DEVICENAME_IN_TOPIC[32] PROGMEM = "Device name in topic";
char EN_INTL_MQTT_TOPIC_INFO[256] PROGMEM = "Below you can format the way you want to send MQTT data. You can add the 'IP address' and 'Device name' at the beginning. You can specify the middle part yourself for each of the values measured by the device.";

char EN_INTL_AQIECOSENDING[128] PROGMEM = "Sending data to the <a title='aqi.eco' href='https://aqi.eco' target='_blank'>aqi.eco</a> service";
char EN_INTL_AQIECOSERVER[32] PROGMEM = "aqi.eco server";
char EN_INTL_AQIECOPATH[32] PROGMEM = "aqi.eco path";

char EN_INTL_CALIBMETHOD[32] PROGMEM = "Calibration method";
char EN_INTL_CALIB1[32] PROGMEM = "calib1";
char EN_INTL_CALIB2[32] PROGMEM = "calib2";
char EN_INTL_SOFTWATEVERSION[32] PROGMEM = "Software version";

char EN_INTL_ERASEWIFICONFIG[32] PROGMEM = "Erase WiFi Config";
char EN_INTL_RESTORESETTINGS[32] PROGMEM = "Restore default settings";
char EN_INTL_SAVE[16] PROGMEM = "Save";
char EN_INTL_YES[16] PROGMEM = "Yes";
char EN_INTL_NO[16] PROGMEM = "No";
char EN_INTL_WITHOUTSENSOR[32] PROGMEM = "Without sensor";
char EN_INTL_WITHOUTCALIBRATION[32] PROGMEM = "Without calibration";
char EN_INTL_AUTOMATICCALIBRATION[32] PROGMEM = "Automatic calibration";

char EN_INTL_INTL_EN[16] PROGMEM = "english";
char EN_INTL_INTL_PL[16] PROGMEM = "polish";

char EN_INTL_FWUPDATEAVALIBLE[64] PROGMEM = "Firmware update available!";
char EN_INTL_AUTOUPDATEON[32] PROGMEM = "Autoupdate";
char EN_INTL_MANUALUPDATEBUTTON[32] PROGMEM = "Manual Upgrade";
char EN_INTL_FWUPDATEBUTTON[32] PROGMEM = "Firmware Upgrade";
char EN_INTL_AUTOUPDATEONBUTTON[64] PROGMEM = "Autoupdate On";
char EN_INTL_AUTOUPDATEWARNING[672] PROGMEM = "Automatic updates are performed via an unencrypted connection (HTTP, not HTTPS). It can be dangerous and allow interception of packets and hacking the device. You can use the Autoupdate once by clicking the \"{TEXT_FWUPDATEBUTTON}\" button or turn on Autoupdate permanently. You can change your mind at any time and disable Autoupdate in the Configuration. After selecting \"{TEXT_FWUPDATEBUTTON}\" or turning on Autoupdate, the device will save the current configuration and restart. It may take several seconds.";
char EN_INTL_UPDATEPAGEAUTOUPDATEWARNING[192] PROGMEM = "Automatic updates are performed via an unencrypted connection (HTTP, not HTTPS). It can be dangerous and allow interception of packets and hacking the device.";

char EN_INTL_SELECTUPDATEFILE[32] PROGMEM = "Select .bin file";
char EN_INTL_SUBMITUPDATE[16] PROGMEM = "Update!";
char EN_INTL_CURRENTSOFTVERSION[64] PROGMEM = "Currently used version of the firmware";
char EN_INTL_SERVERSOFTWAREVERSION[64] PROGMEM = "The latest available firmware version";
char EN_INTL_LATESTAVAILABLESOFT[96] PROGMEM = "Latest version of the software available {SMOGOMIERZRELEASES_LINK}.";

char EN_INTL_HERE[16] PROGMEM = "here";
char EN_INTL_THEFORM[16] PROGMEM = "the form";

char EN_INTL_CONNECTEDWIFI[32] PROGMEM = "Connected to a WiFi(SSID)";
char EN_INTL_WIFIRSSI[32] PROGMEM = "WiFi Signal Strength(RSSI)";
char EN_INTL_WIFIQUALITY[32] PROGMEM = "WiFi Signal Quality";