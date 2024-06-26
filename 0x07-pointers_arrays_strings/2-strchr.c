#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
