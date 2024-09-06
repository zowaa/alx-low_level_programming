/**
 * rev_string - reverses a string
 * @s: String to reverse
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int	i, l;
	char	c;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	l--;
	while (l > i)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		i++;
		l--;
	}
}
