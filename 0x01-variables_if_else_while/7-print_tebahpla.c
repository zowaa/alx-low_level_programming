#include <stdio.h>

/**
 * main - Print alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
