#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String to print
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
