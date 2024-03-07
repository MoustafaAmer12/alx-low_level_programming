#include "main.h"

/**
 * print_square - prints a square of a given size
 * @size: size of the square to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	while (i++ < size)
	{
		j = 0;
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
