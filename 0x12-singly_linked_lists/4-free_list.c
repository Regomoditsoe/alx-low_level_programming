#include "lists.h"
#include <stdlib.h>
/**
 * free_list - A function that frees list_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
