#include <stdio.h>

/**
 * prime - checks whether the number given is prime or not
 * @n: number to check for
 *
 * Return: 1 if prime and 0 otherwise
 */
int prime(unsigned long int n)
{
	unsigned long int i;

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

unsigned long int largest_Pfactor(unsigned long int n)
{
	unsigned long int i, max_factor;

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
	unsigned long int n, max_factor;

	n = 612852475143;
	max_factor = largest_Pfactor(n);
	printf("%lu\n", max_factor);
	return (0);
}

