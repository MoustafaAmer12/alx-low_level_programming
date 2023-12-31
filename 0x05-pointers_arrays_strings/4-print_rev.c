#include "main.h"

/**
 * print_rev - prints the given string in reverse
 * @s: pointer to the first elemnt of the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
