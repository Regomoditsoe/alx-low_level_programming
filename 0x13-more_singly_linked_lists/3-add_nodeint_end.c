#include "lists.h"

/**
 * *add_nodeint_end - A function that adds a node at
 * the end of the listint_t list
 * @head: the node at the end
 * @n: integer
 * Return: new address of the new element
 * Null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
