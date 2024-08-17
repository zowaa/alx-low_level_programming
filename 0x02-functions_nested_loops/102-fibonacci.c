#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	long int res, i, j;
	int count;

	i = 0;
	j = 1;
	count = 1;
	while (count <= 50)
	{
		res = i + j;
		i = j;
		j = res;
		printf("%lu", res);
		if (count != 50)
			printf(", ");
		else
			printf("\n");
		count++;
	}
	return (0);
}
