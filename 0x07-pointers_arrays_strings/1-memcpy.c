/**
 * _memcpy - copies memory area
 * @dest: Area to copy to
 * @src: Area to copy
 * @n: Bytes to copy
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
