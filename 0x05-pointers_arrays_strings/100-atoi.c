/**
 * _atoi - convert a string to an integer
 * @s: String to convert
 *
 * Return: The calculated value
 */
#include <stdio.h>
int _atoi(char *s)
{
	int	i, nb, sign;

	i = 0;
	nb = 0;
	sign = 1;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	return (nb * sign);
}
