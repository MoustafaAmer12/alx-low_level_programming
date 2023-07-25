#include <stdio.h>

/**
 * prime - checks whether the number given is prime or not
 * @n: number to check for
 *
 * Return: 1 if prime and 0 otherwise
 */
int prime(long n)
{
	long i;

	for (i = 3; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_Pfactor - finds the largest prime factor of a number
 * @n: number to find its factor
 *
 * Return: the largest factor
 */

long largest_Pfactor(long n)
{
	long i, max_factor;

	for (i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			if (prime(i))
				max_factor = i;
		}
	}
	return (max_factor);
}

/**
 * main - checks the functions
 *
 * Return: Always 0.
 */
int main(void)
{
	long n, max_factor;

	n = 612852475143;
	max_factor = largest_Pfactor(n);
	printf("%ld\n", max_factor);
	return (0);
}

