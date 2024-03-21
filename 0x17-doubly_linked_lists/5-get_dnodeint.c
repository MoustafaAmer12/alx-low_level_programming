#include "lists.h"

/**
 * get_dnodint_at_index - returns a node at a given index
 * @head: pointer to the head of the list
 * @index: index of the required node
 *
 * Return: node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (index > 0)
		return (NULL);
	return (current);
}
