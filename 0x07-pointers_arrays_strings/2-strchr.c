#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;

	while (*s != 0)
	{
		if (*s == c)
			return s;
		s++;
	}
	return ptr;
}
