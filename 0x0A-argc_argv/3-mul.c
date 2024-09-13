#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @ac: Args number
 * @av: Args list
 *
 * Return: 0 if all good, 1 in case of err
 */

int main(int ac, char **av)
{
	int	a, b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
