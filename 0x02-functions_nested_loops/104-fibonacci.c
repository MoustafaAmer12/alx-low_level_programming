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

	printf("%.0lf, %.0lf, ", first, second);
	while (i < 98)
	{
		num = first + second;
		if (i != 97)
			printf("%.0lf, ", num);
		else
			printf("%.0lf\n", num);
		first = second;
		second = num;
		i++;
	}
	return (0);
}
