#include "main.h"

/**
 * _strcmp - compares two string literals
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are identical, bigger than 0
 * if s1 is greater than s2 and less than 0 if s1 less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 != len2)
	{
		while (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] < s2[i])
			return (-15);
		else
			return (15);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			if (s1[i] == s2[i])
				continue;
			else if (s1[i] < s2[i])
				return (-15);
			else
				return (15);
		}
		return (0);
	}
}
