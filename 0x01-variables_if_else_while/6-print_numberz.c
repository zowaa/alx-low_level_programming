#include <stdio.h>

/**
 * main - Print numbers without using char
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
