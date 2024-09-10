/**
 * _strspn - get length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The list of characters to match in s
 *
 * Return: The length of s befor a character is not in 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int	i, j, found;

	i = 0;
	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
		i++;
	}
	return (i);
}
