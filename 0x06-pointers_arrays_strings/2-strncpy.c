/**
 * _strncpy - copies a string
 * @dest: String to copy to
 * @src: String to copy
 * @n: Bytes to copy
 *
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
