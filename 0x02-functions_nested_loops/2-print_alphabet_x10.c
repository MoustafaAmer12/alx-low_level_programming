#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char start;
	int i = 0;

	while (i++ < 10)
	{
		start = 'a';
		while (start <= 'z')
			_putchar(start++);
		_putchar('\n');
	}
}
