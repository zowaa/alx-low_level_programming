/**
 * cap_string - capitalizes all words of a string
 * @s: String to capitalize
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int	i;

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
