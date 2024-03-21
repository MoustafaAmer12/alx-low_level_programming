#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: pointer to the first element of the list
 * @index: index of the element to be removed
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (current && index > 0)
		{
			current = current->next;
			index--;
		}
		if (current == NULL)
		{
			return (-1);
		}
		else if (index == 0)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
		}
	}
	free(current);
	return (1);
}
