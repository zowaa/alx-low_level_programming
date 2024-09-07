/**
 * _strncat - concatenates n bytes to a strings
 * @dest: String to append to
 * @src: String to append
 * @n: number of bytes to concatenate
 *
 * Return: Resulting concatenated  string
 */

char *_strncat(char *dest, char *src, int n)
{
	int	l, i;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i] && i < n)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
