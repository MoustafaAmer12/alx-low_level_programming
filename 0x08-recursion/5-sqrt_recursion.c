#include "main.h"

/**
 * calc_sqrt - Calculates the value of the sqrt recursively
 * @n: number to get its sqrt
 * @factor: factor to subtract
 *
 * Return: number of times we subtracted the factor to get the sqrt
 */
int calc_sqrt(int n, int factor)
{
	int temp;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	temp = calc_sqrt(n - factor, factor + 2);
	return (temp == -1 ? -1 : 1 + temp);
}

/**
 * _sqrt_recursion - Calculates the square root of an integer
 * @n: number to calculate its sqrt
 *
 * Return: The value of the sqrt of n
 */
int _sqrt_recursion(int n)
{
	int val;

	val = calc_sqrt(n, 1);
	return (val);
}
