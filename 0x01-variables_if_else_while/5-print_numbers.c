#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 for success
 */

int main(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
