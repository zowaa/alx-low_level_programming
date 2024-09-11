/**
 * _strlen_recursion - calculates the length of a string
 * @s: String to calculate
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
