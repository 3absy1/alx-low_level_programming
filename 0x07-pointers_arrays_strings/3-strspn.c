#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: parameter
 * @accept: parameter
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
