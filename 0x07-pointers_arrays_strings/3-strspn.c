#include "main.h"

/**
 * is_found - returns true if the character is in the string
 * @c: character to check for its existence
 * @accept: string to look for
 *
 * Return: 1 if found, 0 otherwise
 */
unsigned int is_found(char c, char *accept)
{
	while (*accept)
	{
		if (c == *accept)
			return (1);
		accept++;
	}
	return (0);
}

/**
 * _strspn - returns the length of a prefix substring
 * @s: string to search in
 * @accept: list of characters that can be in that prefix
 *
 * Return: size of the prefix or pointer to the first unmatching character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		if (is_found(*s, accept))
			len++;
		else
			return (len);
		s++;
	}
	return (len);
}
