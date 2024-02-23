#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char start = 'a';

	while (start <= 'z')
		putchar(start++);
	putchar('\n');
	return (0);
}
