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
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
