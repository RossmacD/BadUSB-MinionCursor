#include "DigiKeyboard.h"
#define KEY_TAB 43
#define ARROW_DOWN 0x51
#define ARROW_LEFT 0x50
#define ARROW_RIGHT 0x4F
#define KEY_BACKSLASH 0x64
#define KEY_DELETE 0x2A

//%USERPROFILE%\Downloads\Minion.cur

//set-location -path 'HKCU:\Control Panel\Cursors'

void setup() {
  //Download
    DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome.exe -incognito http://www.rw-designer.com/cursor-download.php?id=75100");
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

//open control panel
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("regedit");
   DigiKeyboard.delay(800);
   DigiKeyboard.sendKeyStroke(ARROW_LEFT);
   DigiKeyboard.delay(70);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(500);
   
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
//  DigiKeyboard.sendKeyStroke(KEY_DELETE);
//  DigiKeyboard.delay(300);
  
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.delay(70);
  DigiKeyboard.print("Downloads");
  DigiKeyboard.delay(70);
  DigiKeyboard.sendKeyStroke(KEY_BACKSLASH);
  DigiKeyboard.delay(70);
  DigiKeyboard.println("Minion.cur");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT);
  
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
