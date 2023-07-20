#include <stdio.h>

/**
 * main - prints the first 98 numbers in fibonacci series
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	long double fib1, fib2, term;

	i = 2;
	fib1 = 1;
	fib2 = 2;
	printf("%.0Lf, %.0Lf, ", fib1, fib2);
	while (i < 100)
	{
		term = fib1 + fib2;
		fib1 = fib2;
		fib2 = term;
		printf("%.0Lf", term);
		if (i != 99)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
