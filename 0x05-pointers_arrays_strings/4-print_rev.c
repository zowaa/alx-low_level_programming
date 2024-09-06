#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: Pointer to string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
