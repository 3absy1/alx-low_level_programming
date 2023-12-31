#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a contant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	_memset(m, 0, size * nmemb);

	return (m);
}
