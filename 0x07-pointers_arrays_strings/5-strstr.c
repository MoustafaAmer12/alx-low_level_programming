#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp_1, *temp_2;

	while (*haystack)
	{
		temp_2 = haystack;
		temp_1 = needle;
		while (*temp_1 == *temp_2)
		{
			temp_1++;
			temp_2++;
		}
		if (!*temp_1)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
