#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long int first = 1, second = 2, sum = 2, fib = 0;

	while (fib <= 4000000)
	{
		fib = first + second;
		if (fib % 2 == 0)
			sum += fib;
		first = second;
		second = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
