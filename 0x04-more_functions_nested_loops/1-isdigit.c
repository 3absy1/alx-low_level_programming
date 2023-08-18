#include "main.h"

/**
 * _isdigit - check if input is digit
 *
 * @d: input
 *
 * Return: 1if is digit, 0 if not
*/

int _isdigit(int d)
{
	if (d >= 48 && d <= 57)
		return (1);
	else
		return (0);
}
