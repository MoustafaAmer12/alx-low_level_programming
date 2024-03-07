#include "main.h"

/**
 * _strcpy - copies a string to another
 * @dest: pointer to the string to be copied to
 * @src: pointer to the string to be copied from
 *
 * Return: pointer to the first char of the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
