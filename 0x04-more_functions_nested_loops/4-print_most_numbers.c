#include "main.h"

/**
 * print_most_numbers - prints all the digits except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		if (digit != '2' && digit != '4')
			_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
