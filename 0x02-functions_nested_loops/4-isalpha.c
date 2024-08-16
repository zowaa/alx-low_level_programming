/**
 * _isalpha - checks for alphabetic character.
 * @c: Character to check
 *
 * Return: 1 if is a letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
