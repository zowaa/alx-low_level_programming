#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int i, space, hash;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			space = size - i - 1;
			hash = size - space;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
