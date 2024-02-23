#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(' ');
		putchar(i++ + '0');
		if (i != 10)
			putchar(',');
	}
	putchar('\n');
	return (0);
}
