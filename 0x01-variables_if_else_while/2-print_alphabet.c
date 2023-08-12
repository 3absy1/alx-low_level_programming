#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game task
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
