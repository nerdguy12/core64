// Keyboard handler for Core64.
// Very simple, not much except handling certain stuff.
// This will be called after the kernel is initialized from Pure64.
// Some defines
#define KEY_RELEASE 0x80
// KEYBOARD_HANDLER > Handles the Keyboard.
// IN : Nothing (for now)
// OUT : The key pressed on the screen.
#include "keyboard.h"
#include "defs.h"
void KEYBOARD_HANDLER()
{
	/*
	This is the Keyboard handler
	the Keyboard port is at 0x60
	We will receive data using the inb function
	Thanks to bkerndev and James M!
	*/
	unsigned char scancode; // Our buffer to store and print input
	while(1)
	{
	scancode = inportb(0x60); // Take from the Keyboard Port.
	/* You can also do stuff here to check whether the key was released
	Enter a loop 
	Or jump to the next part.
	*/
  
	
	if (scancode & KEY_RELEASE)
	{
		/* Do nothing
		Modify it if you want
		*/
	}
	else
		{
			// Put the stuff on the screen
			putch(KEYBOARD_MAP[scancode],4);
		}
	};
	
};
