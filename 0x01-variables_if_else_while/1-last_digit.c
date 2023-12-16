#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - check the last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, digit_last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit_last = n % 10;

	if (digit_last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit_last);
	else if (digit_last == 0)
		printf("Last digit of %d is %d and is 0", n, digit_last);
	else if (digit_last < 6 && digit_last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit_last);
	}

	putchar('\n');
	return (0);
}

