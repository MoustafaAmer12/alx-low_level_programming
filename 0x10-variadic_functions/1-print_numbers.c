#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given
 * @separator: string to put in between numbers
 * @n: number of integers to print
 * @...: integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list numbers;

	va_start(numbers, n);
	while (i >= 1)
	{
		if (i && separator != NULL)
			printf("%d%s", va_arg(numbers, int), separator);
		else if (i && separator == NULL)
			printf("%d", va_arg(numbers, int));
		i--;
	}
	if (!n)
		printf("\n");
	else
		printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
}
