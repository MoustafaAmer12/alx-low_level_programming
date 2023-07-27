#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string that the second one is added to
 * @src: second string
 *
 * Return: pointer to the first character of the new concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
