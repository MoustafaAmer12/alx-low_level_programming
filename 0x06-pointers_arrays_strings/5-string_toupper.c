#include "main.h"

/**
 * string_toupper - Converts all lower case letters of a string to upper case
 * @s: string to be checked for
 *
 * Return: Poitner to the edited string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
