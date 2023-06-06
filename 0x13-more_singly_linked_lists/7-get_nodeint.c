#include "lists.h"

/**
 * *get_nodeint_at_index - A function that returns the
 * nth node of a listint_t list
 * @head: pointer
 * @index: index
 * Return: nth node, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
