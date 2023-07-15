#include <stdio.h>

/**
 * main - prints the combinations of single digit nos
 *
 * Return: 0 for success
 */

int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + 48);
		if (number < 9)
		{
			putchar (',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
