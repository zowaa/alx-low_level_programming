#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements to be printed
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
			printf(", ");
		i++;
	}
	printf("\n");
}
