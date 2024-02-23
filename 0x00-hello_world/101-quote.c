#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char string[58];
	int i = 0;

	*string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (i < 58)
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
