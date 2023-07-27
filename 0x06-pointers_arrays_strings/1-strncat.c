#include "main.h"

/**
 * _strncat - concatenates two strings until a given length
 * @dest: string to add the other string to
 * @src: string to be added
 * @n: length of the src string to be added
 *
 * Return: pointer to the first character of the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (dest);
}
