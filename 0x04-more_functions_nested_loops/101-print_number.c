#include "main.h"

/**
 * print_number - prints a given number using _putchar
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int end = 0,  sign = 1;
	unsigned int num, rev = 0;

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
	num = n;
	while (num % 10 == 0)
	{
		end++;
		num /= 10;
	}
	while (num > 0)
	{
		rev *= 10;
		rev += num % 10;
		num /= 10;
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
