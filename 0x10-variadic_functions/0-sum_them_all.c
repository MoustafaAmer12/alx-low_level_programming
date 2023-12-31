#include "variadic_functions.h"

/**
 * sum_them_all - takes a variable number of int and sums them
 * @n: the number of integers to take as input
 * @...: the integers to add
 *
 * Return: the sum of the input integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum = 0, i = 0;

	va_start(numbers, n);
	for (; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
