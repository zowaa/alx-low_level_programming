#include "main.h"

/**
 * print_num - prints the result of multiplication
 * @res: result
 *
 * Return: Void
 */

void print_num(int res)
{
	if (res >= 0 && res <= 9)
	{
		_putchar(res + '0');
	}
	else if (res >= 10 && res <= 99)
	{
		_putchar((res / 10) + '0');
		_putchar((res % 10) + '0');
	}
	else
	{
		_putchar(((res / 10) / 10) + '0');
		_putchar(((res / 10) % 10) + '0');
		_putchar((res % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table
 * @n: The number to work with
 *
 * Return: Void
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res = i * j;
				print_num(res);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (i * (j + 1) < 100)
					{
						_putchar(' ');
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
