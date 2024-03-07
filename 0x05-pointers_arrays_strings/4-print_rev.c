#include "main.h"

/**
 * _strlen - returns the size of a string
 * @s: pointer to the first char of a string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int size = _strlen(s) - 1;

	while (size >= 0)
	{
		_putchar(*(s + size--));
	}
	_putchar('\n');
}
