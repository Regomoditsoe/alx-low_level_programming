#include "lists.h"
#include <stdlib.h>

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
	listint_t *a, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		a = *head;
		for (i = 0; i < idx - 1 && a != NULL; i++)
		{
			a = a->next;
		}
		if (a == NULL)
			return (NULL);
	}
	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = a->next;
	a->next = new;
	return (new);
}
