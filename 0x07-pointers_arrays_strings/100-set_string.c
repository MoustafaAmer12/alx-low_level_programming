#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to another pointer
 * @to: value to be set to the pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
