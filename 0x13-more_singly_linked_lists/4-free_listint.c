#include "lists.h"

/**
 * free_listint - frees a list of nodes
 * @head: pointer to the first node in the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
