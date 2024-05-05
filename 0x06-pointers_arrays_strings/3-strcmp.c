#include "main.h"

/**
 * _strcmp - A Function that compares two strings
 * @s1: Poitner to the first string
 * @s2: Pointer to the second string
 *
 * Return: inteer output of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0, i = 0;

	while (!diff)
	{
		diff = s1[i] - s2[i];
		i++;
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
	}
	return (diff);
}
