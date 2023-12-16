#include <stdio.h>

/**
 * main - Entry point
 *
 * Definition - print numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

