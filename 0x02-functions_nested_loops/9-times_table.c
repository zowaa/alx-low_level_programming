#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, res;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			res = i * j;
			if (res <= 9 && res >= 0)
			{
				_putchar((res) + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (!(j == 9))
			{
				_putchar(',');
				if ((i * (j + 1)) > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
