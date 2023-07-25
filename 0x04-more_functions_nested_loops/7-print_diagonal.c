#include "main.h"

/**
 * print_diagonal - prints a diagonal in the form of a backslash
 * @n: number of \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int spaces, i;

	spaces = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			for (i = 0; i < spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spaces++;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
