#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long first = 1, second = 2, num;
	int i = -1;

	printf("%lu, %lu, ", first, second);
	while (i < 98)
	{
		num = first + second;
		if (i != 97)
			printf("%lu, ", num);
		else
			printf("%lu\n", num);
		first = second;
		second = num;
		i++;
	}
	return (0);
}
