#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * @params: void
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
		_putchar(start++);
	_putchar('\n');
}
