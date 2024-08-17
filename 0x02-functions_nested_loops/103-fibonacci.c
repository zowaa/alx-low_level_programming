#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, j, sum, res;

	i = 0;
	j = 1;
	sum = 0;
	while (j < 4000000)
	{
		res = i + j;
		if ((res % 2) == 0)
			sum += res;
		i = j;
		j = res;
	}
	printf("%lu\n", sum);
	return (0);
}
