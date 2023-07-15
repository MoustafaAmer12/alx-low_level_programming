#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
