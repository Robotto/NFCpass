# NFCpass
Runs on an Arduino Leonardo compatible device (needs to be able to act as a keyboard)

My setup runs on a [jtron beetle](http://www.dfrobot.com/wiki/index.php/Beetle_SKU:DFR0282), with a slightly hacked (for size) [Grove NFC unit](http://www.seeedstudio.com/depot/Grove-NFC-p-1804.html)

It checks scanned NFC tags for the correct UID, and if a match is found, it types the password and presses the return key.

The NFC library used is [this one from Seeed Studio](https://github.com/Seeed-Studio/PN532/)

That's it. Happy hacking.
~Robotto
