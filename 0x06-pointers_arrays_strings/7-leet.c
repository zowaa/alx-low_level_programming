/**
 * leet - encodes a string into 1337
 * @s : String to encode
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	char	upper[] = {'A', 'E', 'O', 'T', 'L'};
	char	lower[] = {'a', 'e', 'o', 't', 'l'};
	char	val[] = {'4', '3', '0', '7', '1'};
	int	i, n;

	i = 0;
	while (s[i])
	{
		n = 0;
		while (n < 5)
		{
			if (s[i] == upper[n] || s[i] == lower[n])
				s[i] = val[n];
			n++;
		}
		i++;
	}
	return (s);
}
