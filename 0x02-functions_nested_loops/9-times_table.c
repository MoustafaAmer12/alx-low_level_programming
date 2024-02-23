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
 * times_table - prints the times table
 *
 * ReturnL void
 */
void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j != 0)
				_putchar(' ');
			if (j != 0 && i * j < 10)
				_putchar(' ');
			print_number(i * j);
			if (j != 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
