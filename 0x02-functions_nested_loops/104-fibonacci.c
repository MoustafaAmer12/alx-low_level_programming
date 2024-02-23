#include <stdio.h>
#include "main.h"

/**
 * num_length - returns the length of a number
 * @num: number to compute its length
 *
 * Return: length of n
 */
int num_length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long first = 1, second = 2, num, mx = 100000000, fo = 0, so = 0, sumo = 0;
	int i, initials;

	for (i = 1; i <= 98; i++)
	{
		if (fo > 0)
			printf("%lu", fo);
		initials = num_length(mx) - 1 - num_length(first);
		while (fo > 0 && initials > 0)
		{
			printf("%d", 0);
			initials--;
		}
		printf("%lu", first);
		num = (first + second) % mx;
		sumo = fo + so + (first + second) / mx;
		first = second;
		fo = so;
		second = num;
		so = sumo;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
