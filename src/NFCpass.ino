//Uses the grove NFC (PN532) module in UART mode.
#include "PN532_HSU.h"
#include "PN532.h"
#include "NfcAdapter.h"

static int ledPin = 13;
PN532_HSU interface(Serial1);
NfcAdapter nfc = NfcAdapter(interface);

String correctUID="DE AD BE EF 13 37 00"; //the UID format of the NTAG16 chips is: "DE AD BE EF 13 37 00"
String password="1234"; //If this is actually your password you should be ashamed.

void setup(void) {
	//DEBUG:
	/*
	while(!Serial);
	Serial.begin(9600);
	pulse();
	pulse();
	pulse();
    pinMode(ledPin,OUTPUT);
    */
	Keyboard.begin();
    nfc.begin();
}

void loop(void) {
    if (nfc.tagPresent())
    {

        NfcTag tag = nfc.read();
	   	if(tag.getUidString()==correctUID) Keyboard.println(password);
	   	//DEBUG:
	   	//Serial.println(tag.getUidString());
	   	//pulse();
    }
}

void pulse()
{
	for(int i=0;i<255;i++) {analogWrite(ledPin,i); delay(1);}
	for(int j=255;j>0;j--) {analogWrite(ledPin,j); delay(1);}
	digitalWrite(ledPin,LOW); //make sure it's off
}