#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - list numbers in base16
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i;
	char c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

