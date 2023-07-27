#include "main.h"

/**
 * _atoi - converts the digits in the string to int
 * @s: string to check for decimals
 *
 * Return: int value found and 0 if none.
 */

int _atoi(char *s)
{
	int pos = 0;
	unsigned int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 57 && s[i] >= 48)
		{
			while (s[i] <= 57 && s[i] >= 48 && s[i] != '\0')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			if (pos % 2 == 1)
				return (-num);
			return (num);
		}
		else if (s[i] == '-')
		{
			pos++;
		}
		i++;
	}
	return (0);
}
