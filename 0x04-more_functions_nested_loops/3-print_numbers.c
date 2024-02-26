#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char start = '0';

	for (; start <= '9'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
