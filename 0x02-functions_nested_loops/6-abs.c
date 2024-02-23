#include "main.h"

/**
 * _abs - computes the absolute value for an inteer
 * @n: number to compute its abs
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
