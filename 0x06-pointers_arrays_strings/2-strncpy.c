#include "main.h"

/**
 * _strncpy - copies a part from a string into another one
 * @dest: string to be edited
 * @src: string to be copied
 * @n: length of the characters to be copied from the src
 *
 * Return: pointer to the first char of the updated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
