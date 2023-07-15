#include <stdio.h>

/**
 * main - prints the hexadecimal digits
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'a';
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
