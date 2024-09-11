/**
 * is_prime_help - helper function
 * @n: Original number
 * @i: Divisor
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_help(int n, int i)
{
	if (n < i)
		return (0);
	if (n == i)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (is_prime_help(n, i + 1));
}

/**
 * is_prime_number - cheks if a number is prime
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime_help(n, 2));
}
