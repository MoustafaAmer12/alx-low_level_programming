#include "lists.h"

/**
 * add_node - adds a node to the list
 * @head - address of the head node
 * @str - string to be added in the next node
 *
 * Return: address of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!head || !node)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(node->str);
	}
	node->next = *head;
	*head = node;
	return (node);
}
