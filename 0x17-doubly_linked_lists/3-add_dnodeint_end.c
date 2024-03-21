#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of doubly linked list
 * @head: pointer to the head of the list
 * @n: element to be added to the list
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *add = malloc(sizeof(dlistint_t));

	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	add->prev = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = add;
	add->prev = current;
	return (add);
}
