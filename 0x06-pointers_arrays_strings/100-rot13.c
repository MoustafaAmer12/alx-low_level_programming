#include "main.h"

/**
 * rot13 - Encodes a string into another by rotating characters
 * @s: Pointer to the first character of a string
 *
 * Return: Pointer to the new string
 */
char *rot13(char *s)
{
	char *ptr = s, *or = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *en = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j = 0;

	while (*s)
	{
		for (j = 0; j < 52; j++)
		{
			if (*s == or[j])
			{
				*s = en[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
