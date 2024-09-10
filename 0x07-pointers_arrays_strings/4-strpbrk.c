#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Bytes to search
 *
 * Return: first occurence in s of any char in accept,Or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	int	i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
