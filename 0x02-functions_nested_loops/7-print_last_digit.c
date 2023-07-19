#include "main.h"

/**
 * print_last_digit - prints the last digit of a given int
 * @n: the integer to get its last digit
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int last;

	(n >= 0) ? (last = n % 10) : (last = (-1 * n) % 10);
	_putchar('0' + last);
	return (last);
}
