#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check for
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
