#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer to the first char of the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
