#include "main.h"

/**
 * string_toupper - converts the string to upper case
 * @str: string to caps
 *
 * Return: poitner to the first character of the converted string.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
