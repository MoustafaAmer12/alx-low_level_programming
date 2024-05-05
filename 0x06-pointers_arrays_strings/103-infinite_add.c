#include "main.h"

/**
 * infinite_add - adds two numbers stored in strings
 * @n1: first number
 * @n2: second number
 * @r: result of the summation
 * @size_r: buffer size
 *
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_1 = 0, size_2 = 0, i = 0, sum, carry = 0;
	char temp;
	int end, start;

	while (n1[size_1] != 0)
		size_1++;
	while (n2[size_2] != 0)
		size_2++;
	if (size_1 + 1 > size_r || size_2 + 2 > size_r)
		return (0);
	size_1--;
	size_2--;
	while (size_1 >= 0 || size_2 >= 0)
	{
		if (i >= size_r)
			return (0);
		if (size_1 >= 0 && size_2 >= 0)
			sum = (n1[size_1--] - '0') + (n2[size_2--] - '0') + carry;
		else if (size_1 >= 0)
			sum = (n1[size_1--] - '0') + carry;
		else
			sum = (n2[size_2--] - '0') + carry;
		r[i++] = sum % 10 + '0';
		carry = sum / 10;
	}
	if (carry != 0)
		r[i++] = carry + '0';
	r[i] = '\0';
	if (i >= size_r)
		return (0);
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = r[start];
		r[start++] = r[end];
		r[end--] = temp;
	}
	return (r);
}
