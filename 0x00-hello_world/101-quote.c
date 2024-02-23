#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char *string;

	string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, string, 59);
	return (0);
}
