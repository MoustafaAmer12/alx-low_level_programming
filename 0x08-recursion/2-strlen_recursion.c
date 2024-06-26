#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: Pointer to the string to get its length
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
