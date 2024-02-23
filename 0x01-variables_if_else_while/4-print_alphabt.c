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
	{
		if (start != 'q' && start != 'e')
			putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
