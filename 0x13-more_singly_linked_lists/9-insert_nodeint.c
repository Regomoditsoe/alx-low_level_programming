#include "lists.h"

/**
 * *insert_nodeint_at_index - A function that inserts a new node at
 * a given position
 * @head: pointer
 * @n: node to be inserted
 * @idx: index of lists
 * Return: address of a new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	a = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && a != NULL; i++)
	{
		a = a->next;

	}
	if (a == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->next = a->next;
		a->next = new_node;
		return (new_node);
}
