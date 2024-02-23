#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char start = '0';

	while (start <= '9')
		putchar(start++);
	start = 'a';
	while (start <= 'f')
		putchar(start++);
	putchar('\n');
	return (0);
}
