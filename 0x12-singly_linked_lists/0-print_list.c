#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints
 * all the elements of a list_t list
 * @h: pointer
 * Return: If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sz++;
	}
	return (sz);
}
