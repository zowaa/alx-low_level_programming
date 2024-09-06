/**
 * _strcpy - copies src into dest
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the dest string
 */

char *_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
