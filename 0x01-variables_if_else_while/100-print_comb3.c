#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			if (i != 0 || j != 0)
				putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
				putchar(',');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
