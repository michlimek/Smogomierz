#pragma once

#include "intl/intl_en.h"
#include "intl/intl_pl.h"

void loadtranslation(int SELECTED_LANGUAGE) {
	if (SELECTED_LANGUAGE == 1) { //english translataion
		Serial.println("English Translation!\n");
		// there is no need to translate the default translation(default_intl.h) into English - it is in English
		/*
		strcpy(TEXT_LANG, EN_INTL_LANG);

		strcpy(TEXT_INDEX_PAGE, EN_INTL_INDEX_PAGE);
		strcpy(TEXT_CONFIG_PAGE, EN_INTL_CONFIG_PAGE);
		strcpy(TEXT_CONFIG_DEVICE_PAGE, EN_INTL_CONFIG_DEVICE_PAGE);
		strcpy(TEXT_CONFIG_INFO_DEVICE_PAGE, EN_INTL_CONFIG_INFO_DEVICE_PAGE);
		strcpy(TEXT_CONFIG_SERVICES_PAGE, EN_INTL_CONFIG_SERVICES_PAGE);
		strcpy(TEXT_CONFIG_INFO_SERVICES_PAGE, EN_INTL_CONFIG_INFO_SERVICES_PAGE);
		strcpy(TEXT_UPDATE_PAGE, EN_INTL_UPDATE_PAGE);

		strcpy(TEXT_WEATHER, EN_INTL_WEATHER);
		strcpy(TEXT_TEMPERATURE, EN_INTL_TEMPERATURE);
		strcpy(TEXT_HUMIDITY, EN_INTL_HUMIDITY);
		strcpy(TEXT_PRESSURE, EN_INTL_PRESSURE);
		strcpy(TEXT_DEWPOINT, EN_INTL_DEWPOINT);

		strcpy(TEXT_AIRPOLLUTION, EN_INTL_AIRPOLLUTION);
		strcpy(TEXT_SAVED, EN_INTL_SAVED);

		strcpy(TEXT_POSTCONFIG_INFO, EN_INTL_POSTCONFIG_INFO);
		strcpy(TEXT_INSTRUCIONSLINK, EN_INTL_INSTRUCIONSLINK);
		strcpy(TEXT_DEVICENAME, EN_INTL_DEVICENAME);
		strcpy(TEXT_DEVICENAMEAUTO, EN_INTL_DEVICENAMEAUTO);
		strcpy(TEXT_SELECTEDLANGUAGE, EN_INTL_SELECTEDLANGUAGE);
		strcpy(TEXT_TEMPHUMIPRESSSENSOR, EN_INTL_TEMPHUMIPRESSSENSOR);
		strcpy(TEXT_PMSENSOR, EN_INTL_PMSENSOR);

		strcpy(TEXT_FREQUENTMEASUREMENTONOFF, EN_INTL_FREQUENTMEASUREMENTONOFF);
		strcpy(TEXT_FREQUENTMEASUREMENTINFO, EN_INTL_FREQUENTMEASUREMENTINFO);
		strcpy(TEXT_MEASUREMENTFREQUENCY, EN_INTL_MEASUREMENTFREQUENCY);
		strcpy(TEXT_AVERAGELASTRESULT, EN_INTL_AVERAGELASTRESULT);
		strcpy(TEXT_PMMEASUREMENTS, EN_INTL_PMMEASUREMENTS);
		strcpy(TEXT_SENDINGINTERVAL, EN_INTL_SENDINGINTERVAL);
		strcpy(TEXT_SERVICESSENDINGINTERVAL, EN_INTL_SERVICESSENDINGINTERVAL);
		strcpy(TEXT_DBSENDINGINTERVAL, EN_INTL_DBSENDINGINTERVAL);
		strcpy(TEXT_SECONDS, EN_INTL_SECONDS);
		strcpy(TEXT_MINUTES, EN_INTL_MINUTES);
		
		strcpy(TEXT_DEEPSLEEPINFO, EN_INTL_DEEPSLEEPINFO);
		strcpy(TEXT_DEEPSLEEPINFO_ESP32, EN_INTL_DEEPSLEEPINFO_ESP32);		
		
		strcpy(TEXT_DISPLAYPM1, EN_INTL_DISPLAYPM1);
		strcpy(TEXT_ALTITUDEINFO, EN_INTL_ALTITUDEINFO);

		strcpy(TEXT_SECURECONFIGUPDATEPAGE, EN_INTL_SECURECONFIGUPDATEPAGE);
		strcpy(TEXT_SECURELOGIN, EN_INTL_SECURELOGIN);
		strcpy(TEXT_SECUREPASSWD, EN_INTL_SECUREPASSWD);
		strcpy(TEXT_SECURELOGOUTINFO, EN_INTL_SECURELOGOUTINFO);
		
		strcpy(TEXT_SMOGLISTSENDING, EN_INTL_SMOGLISTSENDING);
		strcpy(TEXT_SMOGLISTINFO, EN_INTL_SMOGLISTINFO);

		strcpy(TEXT_LUFTDATENSENDING, EN_INTL_LUFTDATENSENDING);

		strcpy(TEXT_AIRMONITORSENDING, EN_INTL_AIRMONITORSENDING);
		strcpy(TEXT_AIRMONITORCHARTS, EN_INTL_AIRMONITORCHARTS);
		strcpy(TEXT_AIRMONITORCOORDINATESINFO, EN_INTL_AIRMONITORCOORDINATESINFO);
		strcpy(TEXT_AIRMONITORLATITUDE, EN_INTL_AIRMONITORLATITUDE);
		strcpy(TEXT_AIRMONITORLONGITUDE, EN_INTL_AIRMONITORLONGITUDE);

		strcpy(TEXT_THINGSPEAKSENDING, EN_INTL_THINGSPEAKSENDING);
		strcpy(TEXT_THINGSPEAKCHARTS, EN_INTL_THINGSPEAKCHARTS);
		strcpy(TEXT_THINGSPEAK_WRITE_API_KEY, EN_INTL_THINGSPEAK_WRITE_API_KEY);
		strcpy(TEXT_THINGSPEAKCHANNELID, EN_INTL_THINGSPEAKCHANNELID);
		strcpy(TEXT_THINGSPEAK_READ_API_KEY, EN_INTL_THINGSPEAK_READ_API_KEY);

		strcpy(TEXT_INFLUXDBSENDING, EN_INTL_INFLUXDBSENDING);
		strcpy(TEXT_INFLUXDBSERVER, EN_INTL_INFLUXDBSERVER);
		strcpy(TEXT_INFLUXDBPORT, EN_INTL_INFLUXDBPORT);
		strcpy(TEXT_INFLUXDBNAME, EN_INTL_INFLUXDBNAME);
		strcpy(TEXT_INFLUXDBUSER, EN_INTL_INFLUXDBUSER);
		strcpy(TEXT_INFLUXDBPASSWD, EN_INTL_INFLUXDBPASSWD);

		strcpy(TEXT_CONFIG_ADV_MQTT, EN_INTL_CONFIG_ADV_MQTT);
		strcpy(TEXT_MQTTSENDING, EN_INTL_MQTTSENDING);
		strcpy(TEXT_MQTTSERVER, EN_INTL_MQTTSERVER);
		strcpy(TEXT_MQTTPORT, EN_INTL_MQTTPORT);
		strcpy(TEXT_MQTTUSER, EN_INTL_MQTTUSER);
		strcpy(TEXT_MQTTPASSWD, EN_INTL_MQTTPASSWD);

		strcpy(TEXT_AQIECOSENDING, EN_INTL_AQIECOSENDING);
		strcpy(TEXT_AQIECOSERVER, EN_INTL_AQIECOSERVER);
		strcpy(TEXT_AQIECOPATH, EN_INTL_AQIECOPATH);

		strcpy(TEXT_CALIBMETHOD, EN_INTL_CALIBMETHOD);
		strcpy(TEXT_CALIB1, EN_INTL_CALIB1);
		strcpy(TEXT_CALIB2, EN_INTL_CALIB2);
		strcpy(TEXT_SOFTWATEVERSION, EN_INTL_SOFTWATEVERSION);

		strcpy(TEXT_ERASEWIFICONFIG, EN_INTL_ERASEWIFICONFIG);
		strcpy(TEXT_RESTORESETTINGS, EN_INTL_RESTORESETTINGS);
		strcpy(TEXT_SAVE, EN_INTL_SAVE);
		strcpy(TEXT_YES, EN_INTL_YES);
		strcpy(TEXT_NO, EN_INTL_NO);
		strcpy(TEXT_WITHOUTSENSOR, EN_INTL_WITHOUTSENSOR);
		strcpy(TEXT_WITHOUTCALIBRATION, EN_INTL_WITHOUTCALIBRATION);
		strcpy(TEXT_AUTOMATICCALIBRATION, EN_INTL_AUTOMATICCALIBRATION);

		strcpy(TEXT_INTL_EN, EN_INTL_INTL_EN);
		strcpy(TEXT_INTL_PL, EN_INTL_INTL_PL);
		
		strcpy(TEXT_FWUPDATEAVALIBLE, EN_INTL_FWUPDATEAVALIBLE);
		strcpy(TEXT_AUTOUPDATEON, EN_INTL_AUTOUPDATEON);
		strcpy(TEXT_MANUALUPDATEBUTTON, EN_INTL_MANUALUPDATEBUTTON);
		strcpy(TEXT_FWUPDATEBUTTON, EN_INTL_FWUPDATEBUTTON);
		strcpy(TEXT_AUTOUPDATEONBUTTON, EN_INTL_AUTOUPDATEONBUTTON);
		strcpy(TEXT_AUTOUPDATEWARNING, EN_INTL_AUTOUPDATEWARNING);
		strcpy(TEXT_UPDATEPAGEAUTOUPDATEWARNING, EN_INTL_UPDATEPAGEAUTOUPDATEWARNING);
		
		strcpy(TEXT_SELECTUPDATEFILE, EN_INTL_SELECTUPDATEFILE);
		strcpy(TEXT_SUBMITUPDATE, EN_INTL_SUBMITUPDATE);
		strcpy(TEXT_CURRENTSOFTVERSION, EN_INTL_CURRENTSOFTVERSION);
		strcpy(TEXT_SERVERSOFTWAREVERSION, EN_INTL_SERVERSOFTWAREVERSION);
		strcpy(TEXT_LATESTAVAILABLESOFT, EN_INTL_LATESTAVAILABLESOFT);

		strcpy(TEXT_HERE, EN_INTL_HERE);
		strcpy(TEXT_THEFORM, EN_INTL_THEFORM);
		
		strcpy(TEXT_CONNECTEDWIFI, EN_INTL_CONNECTEDWIFI);
		strcpy(TEXT_WIFIRSSI, EN_INTL_WIFIRSSI);
		strcpy(TEXT_WIFIQUALITY, EN_INTL_WIFIQUALITY);
		
		*/
	} else if (SELECTED_LANGUAGE == 2) { //polish translation
		Serial.println("Polish Translation!\n");
		strcpy(TEXT_LANG, PL_INTL_LANG);

		strcpy(TEXT_INDEX_PAGE, PL_INTL_INDEX_PAGE);
		strcpy(TEXT_CONFIG_PAGE, PL_INTL_CONFIG_PAGE);
		strcpy(TEXT_CONFIG_DEVICE_PAGE, PL_INTL_CONFIG_DEVICE_PAGE);
		strcpy(TEXT_CONFIG_INFO_DEVICE_PAGE, PL_INTL_CONFIG_INFO_DEVICE_PAGE);
		strcpy(TEXT_CONFIG_SERVICES_PAGE, PL_INTL_CONFIG_SERVICES_PAGE);
		strcpy(TEXT_CONFIG_INFO_SERVICES_PAGE, PL_INTL_CONFIG_INFO_SERVICES_PAGE);
		strcpy(TEXT_UPDATE_PAGE, PL_INTL_UPDATE_PAGE);

		strcpy(TEXT_WEATHER, PL_INTL_WEATHER);
		strcpy(TEXT_TEMPERATURE, PL_INTL_TEMPERATURE);
		strcpy(TEXT_HUMIDITY, PL_INTL_HUMIDITY);
		strcpy(TEXT_PRESSURE, PL_INTL_PRESSURE);
		strcpy(TEXT_DEWPOINT, PL_INTL_DEWPOINT);

		strcpy(TEXT_AIRPOLLUTION, PL_INTL_AIRPOLLUTION);
		strcpy(TEXT_SAVED, PL_INTL_SAVED);

		strcpy(TEXT_POSTCONFIG_INFO, PL_INTL_POSTCONFIG_INFO);
		strcpy(TEXT_INSTRUCIONSLINK, PL_INTL_INSTRUCIONSLINK);
		strcpy(TEXT_DEVICENAME, PL_INTL_DEVICENAME);
		strcpy(TEXT_DEVICENAMEAUTO, PL_INTL_DEVICENAMEAUTO);
		strcpy(TEXT_SELECTEDLANGUAGE, PL_INTL_SELECTEDLANGUAGE);
		strcpy(TEXT_TEMPHUMIPRESSSENSOR, PL_INTL_TEMPHUMIPRESSSENSOR);
		strcpy(TEXT_PMSENSOR, PL_INTL_PMSENSOR);

		strcpy(TEXT_FREQUENTMEASUREMENTONOFF, PL_INTL_FREQUENTMEASUREMENTONOFF);
		strcpy(TEXT_FREQUENTMEASUREMENTINFO, PL_INTL_FREQUENTMEASUREMENTINFO);
		strcpy(TEXT_MEASUREMENTFREQUENCY, PL_INTL_MEASUREMENTFREQUENCY);
		strcpy(TEXT_AVERAGELASTRESULT, PL_INTL_AVERAGELASTRESULT);
		strcpy(TEXT_PMMEASUREMENTS, PL_INTL_PMMEASUREMENTS);
		strcpy(TEXT_SENDINGINTERVAL, PL_INTL_SENDINGINTERVAL);
		strcpy(TEXT_SERVICESSENDINGINTERVAL, PL_INTL_SERVICESSENDINGINTERVAL);
		strcpy(TEXT_DBSENDINGINTERVAL, PL_INTL_DBSENDINGINTERVAL);
		strcpy(TEXT_SECONDS, PL_INTL_SECONDS);
		strcpy(TEXT_MINUTES, PL_INTL_MINUTES);

		strcpy(TEXT_DEEPSLEEPINFO, PL_INTL_DEEPSLEEPINFO);
		strcpy(TEXT_DEEPSLEEPINFO_ESP32, PL_INTL_DEEPSLEEPINFO_ESP32);	
		
		strcpy(TEXT_DISPLAYPM1, PL_INTL_DISPLAYPM1);
		strcpy(TEXT_ALTITUDEINFO, PL_INTL_ALTITUDEINFO);

		strcpy(TEXT_SECURECONFIGUPDATEPAGE, PL_INTL_SECURECONFIGUPDATEPAGE);
		strcpy(TEXT_SECURELOGIN, PL_INTL_SECURELOGIN);
		strcpy(TEXT_SECUREPASSWD, PL_INTL_SECUREPASSWD);
		strcpy(TEXT_SECURELOGOUTINFO, PL_INTL_SECURELOGOUTINFO);

		strcpy(TEXT_SMOGLISTSENDING, PL_INTL_SMOGLISTSENDING);
		strcpy(TEXT_SMOGLISTINFO, PL_INTL_SMOGLISTINFO);
		
		strcpy(TEXT_LUFTDATENSENDING, PL_INTL_LUFTDATENSENDING);

		strcpy(TEXT_AIRMONITORSENDING, PL_INTL_AIRMONITORSENDING);
		strcpy(TEXT_AIRMONITORCHARTS, PL_INTL_AIRMONITORCHARTS);
		strcpy(TEXT_AIRMONITORCOORDINATESINFO, PL_INTL_AIRMONITORCOORDINATESINFO);
		strcpy(TEXT_AIRMONITORLATITUDE, PL_INTL_AIRMONITORLATITUDE);
		strcpy(TEXT_AIRMONITORLONGITUDE, PL_INTL_AIRMONITORLONGITUDE);

		strcpy(TEXT_THINGSPEAKSENDING, PL_INTL_THINGSPEAKSENDING);
		strcpy(TEXT_THINGSPEAKCHARTS, PL_INTL_THINGSPEAKCHARTS);
		strcpy(TEXT_THINGSPEAK_WRITE_API_KEY, PL_INTL_THINGSPEAK_WRITE_API_KEY);
		strcpy(TEXT_THINGSPEAKCHANNELID, PL_INTL_THINGSPEAKCHANNELID);
		strcpy(TEXT_THINGSPEAK_READ_API_KEY, PL_INTL_THINGSPEAK_READ_API_KEY);

		strcpy(TEXT_INFLUXDBSENDING, PL_INTL_INFLUXDBSENDING);
		strcpy(TEXT_INFLUXDBSERVER, PL_INTL_INFLUXDBSERVER);
		strcpy(TEXT_INFLUXDBPORT, PL_INTL_INFLUXDBPORT);
		strcpy(TEXT_INFLUXDBNAME, PL_INTL_INFLUXDBNAME);
		strcpy(TEXT_INFLUXDBUSER, PL_INTL_INFLUXDBUSER);
		strcpy(TEXT_INFLUXDBPASSWD, PL_INTL_INFLUXDBPASSWD);

		strcpy(TEXT_CONFIG_ADV_MQTT, PL_INTL_CONFIG_ADV_MQTT);
		strcpy(TEXT_MQTTSENDING, PL_INTL_MQTTSENDING);
		strcpy(TEXT_MQTTSERVER, PL_INTL_MQTTSERVER);
		strcpy(TEXT_MQTTPORT, PL_INTL_MQTTPORT);
		strcpy(TEXT_MQTTUSER, PL_INTL_MQTTUSER);
		strcpy(TEXT_MQTTPASSWD, PL_INTL_MQTTPASSWD);

		strcpy(TEXT_AQIECOSENDING, PL_INTL_AQIECOSENDING);
		strcpy(TEXT_AQIECOSERVER, PL_INTL_AQIECOSERVER);
		strcpy(TEXT_AQIECOPATH, PL_INTL_AQIECOPATH);

		strcpy(TEXT_CALIBMETHOD, PL_INTL_CALIBMETHOD);
		strcpy(TEXT_CALIB1, PL_INTL_CALIB1);
		strcpy(TEXT_CALIB2, PL_INTL_CALIB2);
		strcpy(TEXT_SOFTWATEVERSION, PL_INTL_SOFTWATEVERSION);

		strcpy(TEXT_ERASEWIFICONFIG, PL_INTL_ERASEWIFICONFIG);
		strcpy(TEXT_RESTORESETTINGS, PL_INTL_RESTORESETTINGS);
		strcpy(TEXT_SAVE, PL_INTL_SAVE);
		strcpy(TEXT_YES, PL_INTL_YES);
		strcpy(TEXT_NO, PL_INTL_NO);
		strcpy(TEXT_WITHOUTSENSOR, PL_INTL_WITHOUTSENSOR);
		strcpy(TEXT_WITHOUTCALIBRATION, PL_INTL_WITHOUTCALIBRATION);
		strcpy(TEXT_AUTOMATICCALIBRATION, PL_INTL_AUTOMATICCALIBRATION);

		strcpy(TEXT_INTL_EN, PL_INTL_INTL_EN);
		strcpy(TEXT_INTL_PL, PL_INTL_INTL_PL);

		strcpy(TEXT_FWUPDATEAVALIBLE, PL_INTL_FWUPDATEAVALIBLE);
		strcpy(TEXT_AUTOUPDATEON, PL_INTL_AUTOUPDATEON);
		strcpy(TEXT_MANUALUPDATEBUTTON, PL_INTL_MANUALUPDATEBUTTON);
		strcpy(TEXT_FWUPDATEBUTTON, PL_INTL_FWUPDATEBUTTON);
		strcpy(TEXT_AUTOUPDATEONBUTTON, PL_INTL_AUTOUPDATEONBUTTON);
		strcpy(TEXT_AUTOUPDATEWARNING, PL_INTL_AUTOUPDATEWARNING);
		strcpy(TEXT_UPDATEPAGEAUTOUPDATEWARNING, PL_INTL_UPDATEPAGEAUTOUPDATEWARNING);

		strcpy(TEXT_SELECTUPDATEFILE, PL_INTL_SELECTUPDATEFILE);
		strcpy(TEXT_SUBMITUPDATE, PL_INTL_SUBMITUPDATE);
		strcpy(TEXT_CURRENTSOFTVERSION, PL_INTL_CURRENTSOFTVERSION);

		strcpy(TEXT_SERVERSOFTWAREVERSION, PL_INTL_SERVERSOFTWAREVERSION);
		strcpy(TEXT_LATESTAVAILABLESOFT, PL_INTL_LATESTAVAILABLESOFT);

		strcpy(TEXT_HERE, PL_INTL_HERE);
		strcpy(TEXT_THEFORM, PL_INTL_THEFORM);
		
		strcpy(TEXT_CONNECTEDWIFI, PL_INTL_CONNECTEDWIFI);
		strcpy(TEXT_WIFIRSSI, PL_INTL_WIFIRSSI);
		strcpy(TEXT_WIFIQUALITY, PL_INTL_WIFIQUALITY);

	} else { //others future translations
		Serial.println("Other Translation!\n");
		
	}
}