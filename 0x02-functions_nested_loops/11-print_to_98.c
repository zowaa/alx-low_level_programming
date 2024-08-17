#include <stdio.h>

/**
 * print_to_98 - prints numbers fron n to 98
 * @n: start number
 *
 * Return: Void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
			n--;
		}
	}
}
