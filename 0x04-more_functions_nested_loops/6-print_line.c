#include "main.h"

/**
 * print_line - prints a line using underscores
 * @n: numbers of underscores to be used
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
