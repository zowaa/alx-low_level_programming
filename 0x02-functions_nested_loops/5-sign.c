#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to check
 *
 * Return: 1 if pos, -1 if neg, 0 if is zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
