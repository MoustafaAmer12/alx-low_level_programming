#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0, j, k;

	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				if (i != 0 || j != 1 || k != 2)
					putchar(' ');
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
					putchar(',');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
