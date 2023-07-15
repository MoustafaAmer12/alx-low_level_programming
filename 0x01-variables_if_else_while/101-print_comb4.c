#include <stdio.h>

/**
 * main - print all possibl combinations of 3 digits
 *
 * Return: 0 for success
 */

int main(void)
{
	int number1, number2, number3;

	number1 = 0;
	while (number1 < 8)
	{
		number2 = number1 + 1;
		while (number2 < 9)
		{
			number3 = number2 + 1;
			while (number3 < 10)
			{
				putchar(number1 + 48);
				putchar(number2 + 48);
				putchar(number3 + 48);
				if (number1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
