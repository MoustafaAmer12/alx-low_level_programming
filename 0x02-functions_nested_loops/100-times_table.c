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
 * print_times_table - prints the n times table
 * @n: the size of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (j != 0)
				_putchar(' ');
			if (j != 0 && i * j < 100)
				_putchar(' ');
			if (j != 0 && i * j < 10)
				_putchar(' ');
			print_number(i * j);
			if (j != n)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
