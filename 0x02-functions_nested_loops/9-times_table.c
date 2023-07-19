#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, prod, tmp;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			prod = i * j;
			if (prod < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + prod);
			}
			else
			{
				tmp = prod / 10;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + tmp);
				_putchar('0' + prod % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
