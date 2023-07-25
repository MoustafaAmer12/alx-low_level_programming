#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n, max_factor, i;

	n = 612852475143;
	while (n % 2 == 0)
	{
		max_factor = 2;
		n /= 2;
	}
	for (i = 3; i < sqrt(n); i++)
	{
		while (n % i == 0)
		{
			max_factor = i;
			n /= i;
		}
	}
	printf("%lu\n", max_factor);
	return (0);
}

