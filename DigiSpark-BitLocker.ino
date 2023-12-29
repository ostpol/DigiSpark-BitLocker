#include "DigiKeyboard.h"

// Since this should only run once after power up, everything runs in setup()
void setup() {
  // Set onboard red LED as output and turn it on to show that our code is currently running.
  pinMode(1, OUTPUT);
  digitalWrite(1, HIGH);

  // 20-second delay to ensure reaching the BitLocker input in time.
  DigiKeyboard.delay(20000);
  
  // I forgot about this, but I think it was related to compatibility.
  DigiKeyboard.sendKeyStroke(0);
  
  // Start of your BitLocker PIN key sequence.
  DigiKeyboard.sendKeyStroke(KEY_1);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_2);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_3);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_4);
  DigiKeyboard.delay(100);
  // End of your BitLocker PIN key sequence.
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // We're done, turning off the LED.
  digitalWrite(1, LOW);
}


void loop() {

}