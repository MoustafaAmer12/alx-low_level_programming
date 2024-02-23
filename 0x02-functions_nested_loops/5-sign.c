#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: number to check for its sign
 *
 * Return: 1 if positive, -1 for negative, 0 otherwise
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
	else
	{
		_putchar('0');
		return (0);
	}
}
