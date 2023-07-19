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
 * print_times_table - prints the times table of a given int in range 0 to 15
 * @n: number to print its times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n <= 15 && n >= 0)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				prod =  i * j;
				if (j != 0)
				{
					_putchar(',');
					if (prod > 99)
					{
						_putchar(' ');
					}
					else if (prod > 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				print_int(prod);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
