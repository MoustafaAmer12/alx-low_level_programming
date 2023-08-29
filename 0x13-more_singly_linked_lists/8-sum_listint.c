#include "lists.h"

/**
 * sum_listint - returns the sum of all nodes
 * @head: pointer to the first node in the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
