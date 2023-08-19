#include "variadic_functions.h"

/**
 * print_char - prints character
 * @separator: separates data
 * @data: argument pointer
 */
void print_char(char *separator, va_list data)
{
	printf("%s%c", separator, va_arg(data, int));
}
/**
 * print_int - prints int
 * @separator: separates data
 * @data: argument pointer
 */
void print_int(char *separator, va_list data)
{
	printf("%s%d", separator, va_arg(data, int));
}
/**
 * print_float - prints float
 * @separator: separates data
 * @data: argument pointer
 */
void print_float(char *separator, va_list data)
{
	printf("%s%f", separator, va_arg(data, double));
}
/**
 * print_string - prints string
 * @separator: separates data
 * @data: argument pointer
 */
void print_string(char *separator, va_list data)
{
	char *str = va_arg(data, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list data;
	token_t tokens[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(data, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, data);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(data);
}
