#include "main.h"

/**
 * _strlen - calculates the length of a given string
 * @s: the string to get its length
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
