#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @ac: Args number
 * @av: Args list
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int	i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
