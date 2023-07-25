#include "main.h"

/**
 * print_triangle - prints a triangle of #
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int spaces, i, count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			count = size;
			spaces = size - i;
			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
				count--;
			}
			while (count > 0)
			{
				_putchar('#');
				count--;
			}
			_putchar('\n');
		}
	}
}

