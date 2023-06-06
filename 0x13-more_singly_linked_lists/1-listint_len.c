#include "lists.h"

/**
 * listint_len - A function that returns
 * a number of elements in a linked listint_t list
 * @h: the returned number of elements
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
