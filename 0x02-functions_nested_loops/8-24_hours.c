#include "main.h"

/**
 * print_number - print a number
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int rev = 0, end = n % 10;

	while (n > 9)
	{
		rev += (n % 10);
		n /= 10;
		rev *= 10;
	}
	rev += n;
	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
	if (end == 0)
		_putchar('0');
}

/**
 * jack_bauer - prints every minute on a 24 hour clock
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0, j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
				_putchar('0');
			print_number(i);
			_putchar(':');
			if (j < 10)
				_putchar('0');
			print_number(j);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
