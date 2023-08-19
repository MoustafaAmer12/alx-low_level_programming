#include "variadic_functions.h"

/**
 * print_strings - prints given strings
 * @separator: string to separate strings printed
 * @n: number of strings to be printed
 * @...: strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list strings;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	else
	{
		va_start(strings, n);
		while (i > 1)
		{
			if (separator)
				printf("%s%s", (str = va_arg(strings, char*)) ? str : "(nil)", separator);
			else
				printf("%s", (str = va_arg(strings, char*)) ? str : "(nil)");
			i--;
		}
		printf("%s\n", (str = va_arg(strings, char*)) ? str : "(nil)");
	}
	va_end(strings);
}
