#include "main.h"

/**
 * str_len - calculates the length of a string
 * @s: Pointer to the first character of the string
 *
 * Return: size of the string
 */
int str_len(char *s)
{
	int len = 0;
	char *ptr = s;

	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

/**
 * rec_palindrome - Checks whether a string is palindrome or not
 * @s: pointer to the start of the string
 * @end: pointer to the end of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int rec_palindrome(char *s, char *end)
{
	if (s >= end)
		return (1);
	if (*s != *end)
		return (0);
	return (rec_palindrome(++s, --end));
}

/**
 * is_palindrome - checks whether a string is palindrome or not
 * @s: Pointer to the first character of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int size;
	char *end;

	size = str_len(s);
	end = s + size - 1;
	return (rec_palindrome(s, end));
}
