/**
 * _islower - checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if lowercase , 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
