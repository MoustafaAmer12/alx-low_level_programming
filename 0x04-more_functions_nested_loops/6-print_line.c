#include "main.h"

/**
 * print_line - prints a line of size n
 * @n: size of the line to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n < 0)
		n = 0;
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
