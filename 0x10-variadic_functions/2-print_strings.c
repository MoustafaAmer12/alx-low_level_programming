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
				printf("%s%s", va_arg(strings, char*), separator);
			else
				printf("%s", va_arg(strings, char*));
			i--;
		}
		printf("%s\n", va_arg(strings, char*));
	}
	va_end(strings);
}
