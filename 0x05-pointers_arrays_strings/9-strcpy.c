#include "main.h"

/**
 * _strcpy - coppies the source string to the destination
 * @dest: pointer to the address of the destination
 * @src: pointer to the first character in the source
 *
 * Return: pointer to the first character of the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
