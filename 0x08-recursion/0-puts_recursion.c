#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: parameter
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
}
