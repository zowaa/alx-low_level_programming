#include <stdio.h>

/**
 * main - Print alphabet except [eq]
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
