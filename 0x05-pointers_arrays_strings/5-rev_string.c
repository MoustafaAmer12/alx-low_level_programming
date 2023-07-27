#include "main.h"

/**
 * rev_string - reverses the string
 * @s: pointer to the firs tcharacter of the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	i = 0;
	while (i <= len / 2)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
		i++;
	}
}
