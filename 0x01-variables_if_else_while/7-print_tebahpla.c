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
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

