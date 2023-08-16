#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print the alphabet
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
