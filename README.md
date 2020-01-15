# BadUSB-MinionCursor
This is a badusb script which changes the cursor to a minion from the windows registry.
The script will open chrome, dowload the cursor. Then it gets the base directory from cmd. This is used when the path of the cursor is put into regedit

### Runs on digispark attiny85.
This controller emulates a HID keyboard and programatically sends keystrokes.

### Target requirements
-if regedit already has folders open the cursor will get lost
- The script uses chrome, could be changed to ie

### Problems -
- Delay lengths are too fast for slow pcs.
- Breaks if focus is lost at critical points
- Computer must be reloaded to take effect (Logging out and in will do)
