#include "lists.h"
#include <stdio.h>
/**
 * _strlen - returns the size of a string
 * @str: the string to return its size
 *
 * Return: size
 */
int _strlen(char *str)
{
	int size = 0;

	if (!str)
		return (0);
	while (*str++)
		size++;
	return (size);
}

/**
 * print_list - prints the list from the beginning to the end
 * @h: head node of the single linked list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		size++;
	}
	return (size);
}
