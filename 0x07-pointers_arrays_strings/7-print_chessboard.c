#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to an array of characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
