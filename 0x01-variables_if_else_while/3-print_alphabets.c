#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print alphabetical letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c, j;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
		if (c == 'z')
		{
			for (j = 'A'; j <= 'Z'; j++)
			{
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}

