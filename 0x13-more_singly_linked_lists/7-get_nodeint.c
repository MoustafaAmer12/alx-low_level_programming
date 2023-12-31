#include "lists.h"

/**
 * get_nodeint_at_index - returns node at the required index
 * @head: pointer to the first node
 * @index: the index to return its node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;

	return (node);
}
