#include "lists.h"

/**
 * list_len - A function that returns the
 * number of elements in a linked list_t list
 * @h: list
 * Return: number of elements linked in list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elmnt = 0;

	while (h)
	{
		elmnt++;
		h = h->next;
	}
	return (elmnt);
}
