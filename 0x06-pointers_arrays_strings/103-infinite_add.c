#include "main.h"

/**
 * infinite_add - adds two large numbers given as arrays of characters
 * @n1: 1st number to be added
 * @n2: 2nd number to be added
 * @r: Array of characters to store the added numebr
 * @size_r: size of the array the numbers stored in
 *
 * Return: pointer to the first character of the new integer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int sum, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	len1 -= 1;
	len2 -= 1;
	size_r -= 1;
	r[size_r] = '\0';
	size_r -= 1;
	while ((len1 >= 0 || carry != 0 || len2 >= 0) && size_r >= 0)
	{
		if (len1 >= 0 && len2 >= 0)
		{
			sum = n1[len1] + n2[len2] + carry - '0';
			if (sum <= 57)
			{
				r[size_r] = sum;
				carry = 0;
			}
			else
			{
				sum -= '0';
				r[size_r] = sum % 10 + '0';
				carry = sum / 10;
			}
		}
		else if (len1 < 0 && len2 >= 0)
		{
			sum = n2[len2] + carry;
			if (sum <= 57)
			{
				r[size_r] = sum;
				carry = 0;
			}
			else
			{
				sum -= '0';
				r[size_r] = sum % 10 + '0';
				carry = sum / 10;
			}
		}
		else if (len2 < 0 && len1 >= 0)
		{
			sum = n1[len1] + carry;
			if (sum <= 57)
			{
				r[size_r] = sum;
				carry = 0;
			}
			else
			{
				sum -= '0';
				r[size_r] = sum % 10 + '0';
				carry = sum / 10;
			}
		}
		else if (len1 < 0 && len2 < 0 && size_r >= 0)
		{
			if (carry == 0)
			{
				r[size_r] = 2;
				break;
			}
			else
			{
				r[size_r] = carry + '0';
				carry = 0;
				break;
			}
		}
		len1--;
		len2--;
		size_r--;
	}
	if (size_r < 0 && (len1 >= 0 || len2 >= 0))
		return (0);
	else if (size_r < 0 && carry != 0)
		return (0);
	return (r);
}
