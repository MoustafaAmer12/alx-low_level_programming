#include "main.h"

/**
 * print_number - prints a given number using _putchar
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int end = 0, rev = 0, sign = 1;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	while (n % 10 == 0)
	{
		end++;
		n /= 10;
	}
	while (n > 0)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	if (sign == -1)
		_putchar('-');
	while (rev > 0)
	{
		_putchar(rev % 10 + 48);
		rev /= 10;
	}
	while (end > 0)
	{
		_putchar(48);
		end--;
	}
}
