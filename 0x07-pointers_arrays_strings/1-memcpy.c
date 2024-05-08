#include "main.h"

/**
 * _memcpy - Copied a number of bytes from the source to destination
 * @dest: pointer to the space to be copied to
 * @src: pointer to the area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
