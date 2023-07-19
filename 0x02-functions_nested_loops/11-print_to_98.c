#include "main.h"

/**
 * print_int - prints an integer using _putchar
 * @i: integer to be printed
 *
 * Return: void
 */
void print_int(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i >= 10)
	{
		print_int(i / 10);
	}
	_putchar('0' + i % 10);
}
/**
 * print_to_98 - prints the numbers starting from a given number till 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print_int(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			print_int(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
