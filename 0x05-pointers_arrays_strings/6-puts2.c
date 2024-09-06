#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: String to print
 *
 * Return: Void
 */

void puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		if (!(str[i + 1]))
			break;
		i += 2;
	}
	_putchar('\n');
}
