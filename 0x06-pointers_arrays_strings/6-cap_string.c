#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: string to be capitalized
 *
 * Return: pointer to the first char of the updated string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char esc[] = {' ', '\n', '\t', ',', ';', '.', '!', '?',\
		'"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		else
		{
			j = 0;
			while (j < 13)
			{
				if (str[i] == esc[j])
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] = str[i + 1] - 'a' + 'A';
						i++;
						break;
					}
				}
				j++;
			}
		}
		i++;
	}
	return (str);
}
