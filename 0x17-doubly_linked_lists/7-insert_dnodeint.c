#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: element to be added
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		new->n = n;
		while (idx > 0 && current)
		{
			current = current->next;
			idx--;
		}
		if (current == NULL && idx == 0)
		{
			new = add_dnodeint_end(h, n);
		}
		else if (current != NULL)
		{
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
		}
		else if (current == NULL && idx > 0)
		{
			return (NULL);
		}
	}
	return (new);
}
