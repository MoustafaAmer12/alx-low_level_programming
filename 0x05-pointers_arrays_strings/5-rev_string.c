#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the first char of the string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * swap - swaps characters
 * @a: first char
 * @b: second char
 *
 * Return: void
 */
void swap(char *a, char *b)
{
	char temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int size = _strlen(s) - 1, j = 0;

	while (size > j)
	{
		swap(&s[j++], &s[size--]);
	}
}
