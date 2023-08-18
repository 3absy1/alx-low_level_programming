#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ printed
*/

void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		_putchar(92);
		_putchar('\n');

		for (ln = 2; ln <= n; ln++)
		{
			for (space = 1; space <= ln; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
