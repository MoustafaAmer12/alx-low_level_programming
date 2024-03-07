#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char start = '0';

	for (; start <= '9'; start++)
	{
		if (start != '2' && start != '4')
			_putchar(start);
	}
	_putchar('\n');
}
