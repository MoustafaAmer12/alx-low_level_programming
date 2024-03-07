#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the first element of the string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
