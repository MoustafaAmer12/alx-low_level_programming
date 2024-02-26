#include "main.h"

/**
 * print_diagonal - prints a diagonal of length n
 * n: length of the diagonal to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j++ < i)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
