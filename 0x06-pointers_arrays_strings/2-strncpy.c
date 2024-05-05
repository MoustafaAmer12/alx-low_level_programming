#include "main.h"

/**
 * _strncpy - Copies a string from source to destination
 * @dest: String to be updated
 * @src: String to be copied
 * @n: Number of bytes to be copied from src
 *
 * Return: Pointer to the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	while (i++ < n)
		dest[i] = '\0';
	return (dest);
}
