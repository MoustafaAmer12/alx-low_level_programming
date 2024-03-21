#include "lists.h"

/**
 * dlistint_len - returns the length of a linked list
 * @h: head of the linked list
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
