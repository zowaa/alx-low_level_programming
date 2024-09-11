/**
 * _pow_recursion - power function
 * @x: The number
 * @y: The power
 *
 * Return: the value of x raised to the power of y, or -1 in case of error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
