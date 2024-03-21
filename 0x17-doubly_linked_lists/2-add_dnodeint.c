#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a linked list
 * @head: pointer to the first element in the list
 * @n: element to be added
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = NULL;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	add->next = *head;
	(*head)->prev = add;
	*head = add;
	return (add);
}
