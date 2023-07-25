#include "main.h"

/**
 * _isdigit - checks if the character entered is a digit or not
 * @c: the character entered to check for
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
