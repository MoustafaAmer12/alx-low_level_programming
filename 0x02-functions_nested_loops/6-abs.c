#include "main.h"

/**
 * _abs - calculates the absolute number of a given int
 * @n: the int to be evaluated
 *
 * Return: the absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
