#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @ac: Args number
 * @av: Args list
 *
 * Return: 0 if no args or sum done, 1 in case of error
 */

int main(int ac, char **av)
{
	int	i, j, sum, len;

	sum = 0;
	if (ac == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < ac; i++)
		{
			len = strlen(av[i]);
			for (j = 0; j < len; j++)
			{
				if (!(isdigit(av[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(av[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
