#include "main.h"

/**
 * cap_String - Capitalizes all words in the string
 * @s: Pointer to the original string
 *
 * Return: Pointer to the new string
 */
char *cap_string(char *s)
{
	char *sep = " \t\n,;.!?\"(){}";
	int i = 0, j, cap = 0;

	while (s[i] != '\0')
	{
		if (!cap)
		{
			for (j = 0; j < (int)sizeof(sep); j++)
			{
				if (s[i] == sep[j])
				{
					cap = 1;
				}
			}
		}
		else
		{
			cap = 0;
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] = s[i] - 'a' + 'A';
			}
		}
		i++;
	}
	return (s);
}
