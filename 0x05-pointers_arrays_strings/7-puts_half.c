#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer to string
 *
 * return: Void
 */

void puts_half(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	if ((l % 2) == 0)
	{
		l = l / 2;
		while (str[l])
		{
			_putchar(str[l]);
			l++;
		}
	}
	else
	{
		l = (l - 1) / 2;
		while (str[l])
		{
			_putchar(str[l]);
			l++;
		}
	}
	_putchar('\n');
}
