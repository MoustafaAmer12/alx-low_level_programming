#include "main.h"

/**
 * leet - encodes the string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to the first character of the encoded string.
 */

char *leet(char *str)
{
	char *test = "AaEeOoTtLl";
	char *conv = "4433007711";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
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
