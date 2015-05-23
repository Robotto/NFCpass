# NFCpass
Runs on an Arduino Leonardo compatible device (needs to be able to act as a keyboard)

My setup runs on a [jtron beetle](http://www.dfrobot.com/wiki/index.php/Beetle_SKU:DFR0282), with a slightly hacked (for size) [Grove NFC unit](http://www.seeedstudio.com/depot/Grove-NFC-p-1804.html) I have soldered the jtron to my a USB port on my motherboard, and it works quite well

It checks scanned NFC tags for the correct UID, and if a match is found, it types the password and presses the return key.

The NFC library used is [this one from Seeed Studio](https://github.com/Seeed-Studio/PN532/) which has been added as a submodule in the lib. Be sure to pull the nested submodule as well by using: ```git submodule update --init --recursive```
after having cloned from here.

That's it. Happy hacking.
~Robotto
