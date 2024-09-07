/**
 * _strcat - concatenates two strings
 * @dest: String to append to
 * @src: String to append
 *
 * Return: Resulting concatenated  string
 */

char *_strcat(char *dest, char *src)
{
	int	i, l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
