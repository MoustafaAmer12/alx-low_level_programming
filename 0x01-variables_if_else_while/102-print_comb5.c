#include <stdio.h>

/**
 * main - prints all possible combinations of two 2 digit numbers
 *
 * Return: 0 for success
 */

int main(void)
{
	int num1, num2, num3, num4;

	num1 = num2 = num3 = num4 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num3 = num1;
			while (num3 < 10)
			{
				if (num3 > num1)
					num4 = 0;
				else
					num4 = num2 + 1;
				while (num4 < 10)
				{
					putchar(num1 + 48);
					putchar(num2 + 48);
					putchar(' ');
					putchar(num3 + 48);
					putchar(num4 + 48);
					if (!(num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9))
					{
						putchar(',');
						putchar(' ');
					}
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
