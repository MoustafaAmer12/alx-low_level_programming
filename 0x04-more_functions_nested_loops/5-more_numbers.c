#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int start;

	for (; i < 10; i++)
	{
		start = 0;
		while (start < 15)
		{
			_putchar(start / 10 + '0');
			if (start > 10)
				_putchar(start % 10 + '0');
			start++;
		}
		_putchar('\n');
	}
}
