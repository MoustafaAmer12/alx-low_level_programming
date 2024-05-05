#include "main.h"

/**
 * _strcat - Function that concatenates 2 strings overwriting the first one
 * @dest: Original String that will contain the result
 * @src: String to be added
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
