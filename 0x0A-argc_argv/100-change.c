#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @ac: Args number
 * @av: Args list
 *
 * Return: 0 if succes, 1 if error
 */

int main(int ac, char **av)
{
	int	t[5] = {25, 10, 5, 2, 1};
	int	i, num, count;

	count = 0;
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(av[1]);
	if (num <= 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (num >= t[i])
			{
				num -= t[i];
				count++;
			}
			if (num == 0)
				break;
		}
		printf("%d\n", count);
	}
	return (0);
}
