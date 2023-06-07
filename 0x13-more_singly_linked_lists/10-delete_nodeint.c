#include "lists.h"

/**
 * delete_nodeint_at_index - A fuction that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer
 * @index: the inex of the node that should be deleted
 * Return: 1 if it succeeds, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	a = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (a->next == NULL)
			return (-1);
		a = a->next;
	}
	node = a->next;
	a->next = node->next;
	free(node);

	return (1);
}
