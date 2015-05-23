//Uses the grove NFC (PN532) module in UART mode.
#include "PN532_HSU.h"
#include "PN532.h"
#include "NfcAdapter.h"

PN532_HSU interface(Serial1);
NfcAdapter nfc = NfcAdapter(interface);

String correctUID="DE AD BE EF 13 37 00"; //the UID format of the NTAG16 chips is: "DE AD BE EF 13 37 00"
String password="1234"; //If this is actually your password you should be ashamed.

void setup(void) {
	Keyboard.begin();
    nfc.begin();
}

void loop(void) {
    if (nfc.tagPresent())
    {

        NfcTag tag = nfc.read();
	   	if(tag.getUidString()==correctUID) Keyboard.println(password);
	   	while(nfc.tagPresent()); //only type password once
    }
}