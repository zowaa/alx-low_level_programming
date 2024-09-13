#include <stdio.h>

/**
 * main - a program that prints its name
 * @ac: Args number
 * @av: Args list
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", av[0]);
	return (0);
}
