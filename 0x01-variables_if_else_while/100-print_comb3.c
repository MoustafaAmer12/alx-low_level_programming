#include <stdio.h>

/**
 * main - print the combinations of 2 numbers
 *
 * Return: 0 for success
 */

int main(void)
{
	int number1, number2;

	number1 = 0;
	while (number1 < 9)
	{
		number2 = number1 + 1;
		while (number2 < 10)
		{
			putchar(number1 + 48);
			putchar(number2 + 48);
			number2++;
			if (number1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
