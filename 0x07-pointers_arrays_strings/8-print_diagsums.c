#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: Pointer to one_D array
 * @size: Size of the matrix
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	unsigned int	sum1, sum2;
	int		i;

	sum1 = sum2 = i = 0;
	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
