#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: the number to print its sign
 *
 * Return: 1 if +, 0 if 0 & -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
