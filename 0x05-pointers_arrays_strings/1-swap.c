/**
 * swap_int - swaps the values of two integers
 * @a: Pointer to first number
 * @b: Pointer to second number
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
