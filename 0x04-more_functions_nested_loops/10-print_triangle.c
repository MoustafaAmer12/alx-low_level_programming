#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle to be printed
 *
 * Return: 0 on success
 */
void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
