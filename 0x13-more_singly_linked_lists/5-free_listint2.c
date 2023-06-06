#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: list to be freed
 * The function sets head to NULL
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list, *f;

	if (head == NULL)
		return;

	list = *head;
	while (list)
	{
		f = list;
		list = list->next;
		free(f);
	}
	*head = NULL;
}
