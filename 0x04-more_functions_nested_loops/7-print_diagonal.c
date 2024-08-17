#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;


	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			j = i;
			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			i++;
			if (i < n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
