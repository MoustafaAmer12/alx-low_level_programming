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
 * _strpbrk - checks for the existence of a number of bytes in a string
 * @s: string to search in
 * @accept: bytes to search for in s
 *
 * Return: pointer to the byte in s that is in accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (is_found(*s, accept))
			return (s);
		s++;
	}
	return ('\0');
}
