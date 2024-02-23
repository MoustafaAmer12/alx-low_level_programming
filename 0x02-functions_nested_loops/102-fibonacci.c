#include <stdio.h>

/**
 * main - prints the first 50 fibonnaci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	long int first = 1, second = 2, num;

	int i = 2;
	printf("%ld, %ld, ", first, second);
	while (i <= 50)
	{
		num = first + second;
		printf("%ld", num);
		if ( i != 50)
			printf(", ");
		else
			printf("\n");
		first = second;
		second = num;
		i++;
	}
	return (0);
}
