#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list of integers
 * @h: pointer to the head of the list
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	do {
		printf("%d\n", h->n);
		size++;
		h = h->next;
	} while (h);
	return (size);
}
