#include "main.h"

/**
 * reverse_array - function to reverses araay of integers
 *
 * @a: array of integers
 * @n: parameter
 *
 * Return: noting
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
