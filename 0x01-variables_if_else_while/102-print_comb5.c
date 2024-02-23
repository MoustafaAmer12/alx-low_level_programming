#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0, j, k, l;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i;
			l = j + 1;
			while (k < 10)
			{
				while (l < 10)
				{
					if (i != 0 || j != 0 || k != 0 || l != 1)
						putchar(' ');
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 9 || j != 8 || k != 9 || l != 9)
						putchar(',');
					l++;
				}
				l = 0;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
