/**
 * factorial - calculates the factorial of a given number
 * @n: Number to caltulate
 *
 * Return: The factorial, or -1 if n lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
