#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the first character of the string
 *
 * Return: int value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (*(s + i) != '\0')
	{
		if (num == 0 && *(s + i) == '-')
			sign *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			num = 10 * num + *(s + i) - '0';
		else if (num != 0)
			break;
		i++;
	}
	return (sign * num);
}
