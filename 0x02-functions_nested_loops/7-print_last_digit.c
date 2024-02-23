#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: number to get its last digit
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
