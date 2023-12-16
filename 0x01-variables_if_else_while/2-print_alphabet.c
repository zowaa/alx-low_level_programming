#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - prints the alphabet
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
		if (c == 'z')
			putchar('\n');
	}

	return (0);
}

