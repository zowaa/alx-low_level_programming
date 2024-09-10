#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: String to search in
 * @needle: Substring to find
 *
 * Return: First occurence of the substring , or NULL if none found
 */

char *_strstr(char *haystack, char *needle)
{
	int	i, j, n_l;
	char	*p;

	i = 0;
	p = NULL;
	n_l = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (needle[n_l])
		n_l++;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j])
			{
				if (needle[j] == haystack[i + j])
					j++;
				else
					break;
			}
			if (j == n_l)
			{
				p = &haystack[i];
				break;
			}
		}
		i++;
	}
	return (p);
}
