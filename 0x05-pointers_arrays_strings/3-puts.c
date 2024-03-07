#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the first character of the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
