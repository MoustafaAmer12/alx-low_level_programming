#include "main.h"
#include <stdio.h>

/**
 * isPrintableAscii - determines if n is a printable ascii character
 * @n: integer
 *
 * Return: 1 if printable, 0 otherwise
 */
int isPrintableAscii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHex - prints hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: end position
 *
 * Return: void
 */
void printHex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printAscii - prints ascii values for string b
 * @b: string to print
 * @start: starting position
 * @end: end position
 *
 * Return: void
 */
void printAscii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHex(b, start, end);
			printAscii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
