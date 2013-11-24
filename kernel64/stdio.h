// Some functions to make the Kernel usable
// I feel like puking,
#include "types.h"
void os_clear_screen(); // Clear Screen Implementation
unsigned int os_print_string(unsigned char *string,int line); // Some printf duplicate I guess.
void os_move_cursor(int x,int y); // Some move cursor function.
// OUT : Nothing
unsigned int putch(unsigned char string,int y);
// From James M Kernel Tutorials
void outb(u16int port, u8int value);
u8int inb(u16int port);
u16int inw(u16int port);
// Keyboard
void KEYBOARD_HANDLER();

