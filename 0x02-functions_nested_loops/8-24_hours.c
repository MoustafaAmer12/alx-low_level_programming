#include "main.h"

/**
 * jack_bauer - prints all the minutes in the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hrs, min, tmp;

	hrs = 0;
	while (hrs < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (hrs < 10)
			{
				_putchar('0');
				_putchar('0' + hrs);
			}
			else
			{
				tmp = hrs / 10;
				_putchar('0' + tmp);
				_putchar('0' + tmp);
			}
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
				_putchar('0' + min);
			}
			else
			{
				tmp = min / 10;
				_putchar('0' + tmp);
				_putchar('0' + min % 10);
			}
			_putchar('\n');
			min++;
		}
		hrs++;
	}
}
