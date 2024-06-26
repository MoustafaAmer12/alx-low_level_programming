#include "main.h"

/**
 * put_int - Prints a number recursively
 * @n: Integer to be printed
 * @sign: 1 for negative and 0 for positive
 *
 * Return: void
 */
void put_int(unsigned int n, unsigned int sign)
{
	char digit = n % 10 + '0';

	if (n >= 10)
		put_int(n / 10, sign);
	if (sign && n < 10)
		_putchar('-');
	_putchar(digit);
}
/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
		put_int(-1 * n, 1);
	else
		put_int(n, 0);
}
