#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
