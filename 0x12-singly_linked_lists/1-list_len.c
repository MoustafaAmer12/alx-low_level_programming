#include "lists.h"

/**
 * list_len - gets the number of elements in the list
 * @h: header node of the list
 *
 * Return: Size of the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
