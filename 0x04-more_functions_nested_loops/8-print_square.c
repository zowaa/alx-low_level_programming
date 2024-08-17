#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: Void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int line, col;

		line = 0;
		while (line < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			line++;
		}
	}
	else
		_putchar('\n');
}
