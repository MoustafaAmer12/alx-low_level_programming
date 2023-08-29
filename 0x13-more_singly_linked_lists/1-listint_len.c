#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 * @h: pointer to the first node in the list
 *
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
