#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		head = list;
		list = head->next;
		free(list);
	}
}
