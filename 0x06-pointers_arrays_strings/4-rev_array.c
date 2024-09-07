/**
 * reverse_array - reverses the content of an array of integers
 * @a: Integer array
 * @n: Array size
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int	i, tmp;

	i = 0;
	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
