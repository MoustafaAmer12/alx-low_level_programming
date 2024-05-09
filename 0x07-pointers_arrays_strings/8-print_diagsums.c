#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a 2d array
 * @a: a 2d array of equal rows and cols
 * @size: size of the 2d matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0, sum_2 = 0, i = 0, j, k = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				sum_1 += a[k];
			}
			if (i + j == size - 1)
			{
				sum_2 += a[k];
			}
			j++;
			k++;
		}
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
