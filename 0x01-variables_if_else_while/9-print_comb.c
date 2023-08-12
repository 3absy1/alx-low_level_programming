#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Patience, persistence and perspiration
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
