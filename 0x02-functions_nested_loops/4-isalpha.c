#include "main.h"

/**
 * _isalpha - checks whether the character is an alphabet or not
 * @c: character to check
 *
 * Return: 1 if char is alphabet 0 otherwise.
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
