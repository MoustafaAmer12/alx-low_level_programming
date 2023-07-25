#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, digit;

	i = 0;
	while (i < 10)
	{
		digit = 0;
		while (digit < 15)
		{
			if (digit > 9)
			{
				_putchar('1');
			}
			_putchar(digit % 10 + 48);
			digit++;
		}
		_putchar('\n');
		i++;
	}
}
