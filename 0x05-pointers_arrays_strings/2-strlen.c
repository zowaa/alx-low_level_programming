/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: number  of  bytes  in  the string
 */

int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
