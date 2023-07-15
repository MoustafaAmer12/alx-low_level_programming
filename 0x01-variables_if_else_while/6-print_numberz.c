#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: 0 for success
 */

int main(void)
{
	int number;

	while (number <= 9)
	{
		putchar(number + 48);
		number++;
	}
	putchar('\n');
	return (0);
}
