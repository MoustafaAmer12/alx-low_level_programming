#include <stdio.h>

/**
 * main - prints the first 98 numbers in fibonacci series
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	unsigned long fib1, fib2, term;

	i = 2;
	fib1 = 1;
	fib2 = 2;
	printf("%lu, %lu, ", fib1, fib2);
	while (i < 98)
	{
		term = fib1 + fib2;
		fib1 = fib2;
		fib2 = term;
		printf("%lu", term);
		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
