#include "main.h"
#include <math.h>
#define MAX_SIZE 100000000

/**
 * _sqrt - returns the sqrt of a number
 * @num: number to calculate its squareroot
 *
 * Return: returns the square root of a number
 */
double _sqrt(long int num)
{
	double sqrt, temp = 0;

	sqrt = num / 2;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	return (sqrt);
}
/**
 * prime_factor - prints the largest prime factor of a number
 * @n: number to gt its largest prime factor
 *
 * Return: void
 */
void prime_factor(long int n)
{
	int primNo, largest;

	while (n % 2 == 0)
		n /= 2;
	for (primNo = 3; primNo <= _sqrt(n); primNo += 2)
	{
		while (n % primNo == 0)
		{
			n /= primNo;
			largest = primNo;
		}
	}

	if (n > 2)
		largest = n;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long int n = 612852475143;

	prime_factor(n);
	return (0);
}
