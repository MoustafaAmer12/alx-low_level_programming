#include "main.h"

/**
 * _strlen - returns the size of a string
 * @s: pointer to the first element of the string
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
 * puts_half - prints second half of the string
 * @str: pinter to the first element of the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int size = _strlen(str), n;

	n = (size % 2 == 0) ? size / 2 : size - size / 2;
	while (n < size)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
