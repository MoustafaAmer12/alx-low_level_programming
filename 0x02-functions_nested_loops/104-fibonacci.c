#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	double first = 1, second = 2, num;
	int i = 2;

	printf("%.0f, %.0f, ", first, second);
	while (i < 98)
	{
		num = first + second;
		if (i != 96)
			printf("%.0f, ", num);
		else
			printf("%.0f\n", num);
		first = second;
		second = num;
		i++;
	}
	return (0);
}
