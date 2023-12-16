#include <stdio.h>

/**
 * main - Entry point
 *
 * Destination -  print alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

