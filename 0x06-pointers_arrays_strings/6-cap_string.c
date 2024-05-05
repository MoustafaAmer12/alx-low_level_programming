#include "main.h"

/**
 * cap_string - Capitalizes all words in the string
 * @s: Pointer to the original string
 *
 * Return: Pointer to the new string
 */
char *cap_string(char *s)
{
	char *sep = " \n\t,;.!?\"(){}", *ptr = s;
	int j, cap = 1;
	
	while (*s)
	{
		if (!cap)
		{
			for (j = 0; j < 13; j++)
			{
				if (*s == sep[j])
				{
					cap = 1;
					break;
				}
			}
		}
		else
		{
			cap = 0;
			if (*s <= 'z' && *s >= 'a')
			{
				*s = *s - 'a' + 'A';
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (*s == sep[j])
					{
						cap = 1;
						break;
					}
				}
			}
		}
		s++;
	}
	return (ptr);
}
