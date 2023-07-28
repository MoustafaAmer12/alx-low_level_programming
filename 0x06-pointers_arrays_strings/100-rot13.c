#include "main.h"

/**
 * rot13 - encodes the string by rotating any character with 13
 * @str: string literal to be encoded
 *
 * Return: pointer to the first character of the encoded string
 */

char *rot13(char *str)
{
	char *test = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *conv = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == test[j])
			{
				str[i] = conv[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
