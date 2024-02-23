#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char *string = "_putchar\n";
	int i = 0;

	while (i < 9)
		_putchar(string[i++]);
	return (0);
}
