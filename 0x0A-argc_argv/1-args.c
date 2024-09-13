#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @ac: Args number
 * @av: Args list
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
