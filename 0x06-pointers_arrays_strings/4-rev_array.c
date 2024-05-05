#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of Elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
