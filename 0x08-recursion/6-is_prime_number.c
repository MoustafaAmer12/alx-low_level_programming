#include "main.h"

/**
 * rec_prime - Checks whether the no is prime or not
 * @n: Number to check for
 * @factor: number to divide with
 *
 * Return: 1 if prime 0 otherwise
 */
int rec_prime(int n, int factor)
{
	if (n <= 1)
		return (0);
	if (factor > n / 2)
		return (1);
	if (n % factor == 0)
		return (0);
	return rec_prime(n, factor + 1);
}

/**
 * is_prime_number - Checks whether an int is prime or not
 * @n: Integer to check for
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (rec_prime(n, 2));
}
