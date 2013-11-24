// core64/kernel/kernel.c ---> Kernel
// Some stuff
// Very much useless
// Useless!
// Core64 - A 64-bit Kernel written in C
// Doesn't compile for Windows Fanboys
// Shows PE errors.
// Only for Mac, BSD and Linux + UNIX Fanboys + ELF Fanboys
// Also kills PE Fanboys
// PE = Puke Executable
// Believe me!
// Windows = Work Is Never Done On Windows Systems
// End to hex codes
#define WHITE_ON_GREEN 0x2F
#include "stdio.h" // Some functions that need to be used.
int main() // The main entry point of the Kernel
{
	// Here Pure64 will leave us
	// Saying good-bye
	os_clear_screen(); // Clear the screen
	os_move_cursor(4,0); // Update the cursor
	os_print_string("64-bit Kernel Loaded in Memory",1);
	os_print_string("SYSTEM INITIALIZED SUCCESSFULLY!",2); // Enjoy life
	os_print_string("x86 Keyboard Port Enabling......... Press a Key to see the Pressed one!",3);
	os_print_string(">",4);
	while(1)
	{
		KEYBOARD_HANDLER();
	}	
	return (0);
};
// Code to pull in the kernel
#include "vga/screen.h" // Screen/VGA functions (80x25)
#include "ports/ports.c" // Outport and Inport functions
#include "keyboard/keyboard.c" // Keyboard Handler
