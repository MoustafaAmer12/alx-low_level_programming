#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed string recursively
 * @s: Pointer to the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
