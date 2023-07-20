#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 numbers of fibonacci series
 *
 * Return: 0 for success
 */
int main(void)
{
	int term, max;
	long int a, b, sum;

	a = 1;
	b = 2;
	max = 50;
	term = 0;
	printf("%ld, ", a);
	printf("%ld, ", b);
	while (term < max)
	{
		sum = a + b;
		printf("%ld", sum);
		if (term != 49)
			printf(", ");
		a = b;
		b = sum;
		term++;
	}
	printf("\n");
	return (0);
}
