/**
 * _sqrt_h - helper function
 * @n: Original number
 * @i: Verification number
 *
 * Return: Sqrt value
 */

int _sqrt_h(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) == n)
		return (i);
	if (n == i)
		return (-1);
	return (_sqrt_h(n, i + 1));
}


/**
 * _sqrt_recursion - square root function
 * @n: Number
 *
 * Return: Square root of n, or -1 if none exist
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_h(n, 1));
}
