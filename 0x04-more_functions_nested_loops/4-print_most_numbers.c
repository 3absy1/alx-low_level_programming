#include "main.h"

/**
 * print_numbers - print 0 - 9 but not 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
