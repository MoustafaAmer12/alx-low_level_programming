#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int i = 1;

	while (i * 3 < 1024 || i * 5 < 1024)
	{
		if (i * 3 < 1024 && (i % 5 != 0))
			sum += (i * 3);
		if (i * 5 < 1024 && (i % 3 != 0))
			sum += (i * 5);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
