#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		list = head->next;
		free(list);
	}
}
