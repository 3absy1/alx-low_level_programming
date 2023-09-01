#include "main.h"

/**
 * *_memset -  afunction to fills memory with a constant byte.
 *
 * @s: parameter
 * @b:parameter
 * @n: parameter
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
