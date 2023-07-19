#include "main.h"

/**
 * _islower - checks if the character is a lower alphabet
 * @c: the char to check
 *
 * Return: 1 if lower-case 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
