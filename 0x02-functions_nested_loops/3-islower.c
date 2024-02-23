#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: character to check for
 *
 * Return: 1 for lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
