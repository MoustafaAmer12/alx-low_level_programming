#include "main.h"

/**
 * _strncat - Adds at most n bytes from src to dest
 * @dest: String to be edited and returned
 * @src: String to be added to the destination
 * @n: number of bytes to be added from src to dest
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j <= n - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
