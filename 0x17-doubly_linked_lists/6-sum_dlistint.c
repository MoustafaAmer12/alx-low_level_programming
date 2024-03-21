#include "lists.h"

/**
 * sum_dlistint - calculates the sum of the elements of the linked list
 * @head: pointer to the first element of the list
 *
 * Return: the sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
