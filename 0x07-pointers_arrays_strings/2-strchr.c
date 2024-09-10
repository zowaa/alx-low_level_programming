#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String to search in
 * @c: Searched character
 *
 * Return: Pointer to first occurence of c , or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int	i, l;

	i = 0;
	l = 0;
	while (s[l])
		l++;
	while (i <= l)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
