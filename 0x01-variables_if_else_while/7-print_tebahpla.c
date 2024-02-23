#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char start = 'z';

	while (start >= 'a')
		putchar(start--);
	putchar('\n');
	return (0);
}
