#include "main.h"

/**
 * print_number - prints a given number using _putchar
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -1*n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar(num % 10 + 48);
}
