#include "main.h"

/**
 * _memset - Fills a number of bytes in memory with a constant byte
 * @s: pointer to the location to be filled
 * @b: byte to fill the memory
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
