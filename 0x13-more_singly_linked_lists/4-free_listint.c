#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head listint_t list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}
