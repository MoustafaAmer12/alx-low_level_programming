#include "main.h"
#include <stdio.h>

/**
 * main - calculates the sum of the even fibonacci terms less than 4000000
 *
 * Return: 0 for success
 */
int main(void)
{
	int fib1, fib2, term, max;
	long sum;

	max = 4000000;
	fib1 = 1;
	fib2 = 2;
	sum = fib2;
	term = fib1 + fib2;
	while (term <= max)
	{
		if (term % 2 == 0)
			sum += term;
		fib1 = fib2;
		fib2 = term;
		term = fib1 + fib2;
	}
	printf("%ld\n", sum);
	return (0);
}
