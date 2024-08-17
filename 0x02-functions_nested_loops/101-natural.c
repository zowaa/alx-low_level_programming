#include <stdio.h>

/**
 * main - prints suum of multiples of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int n, sum;

	n = 3;
	sum = 0;
	while (n < 1024)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
			sum += n;
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
