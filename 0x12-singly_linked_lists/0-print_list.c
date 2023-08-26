#include "lists.h"
#include <stdio.h>

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
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		size++;
	}
	return (size);
}
