#include "main.h"

/**
 * leet - Encodes a string
 * @s: Pointer to the first char of the string
 *
 * Return: Pointer to the edited string
 */
char *leet(char *s)
{
	char *or = "aAeEoOtTlL", *en = "4433007711", *ptr = s;
	int j = 0;

	while (*s)
	{
		for (j = 0; j < 10; j++)
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
