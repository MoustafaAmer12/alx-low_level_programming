#include "main.h"
#include <stdio.h>

/**
 * main - calculates the sum of the multiples of 3 and 5 below 1024
 *
 * Return: 0 for success
 */
int main(void)
{
	int max, n, sum;

	n = 0;
	sum = 0;
	max = 1024;
	while (n < max)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
