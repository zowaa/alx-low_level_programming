/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the area to fill
 * @b: Byte to fill with
 * @n: First n bytes to fill
 *
 * Return: Pointer to area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
