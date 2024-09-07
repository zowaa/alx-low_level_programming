/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer less than, equal to, or greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
