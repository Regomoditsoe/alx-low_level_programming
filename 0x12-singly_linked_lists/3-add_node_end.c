#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - A function that adds a new node
 * at the end of list_t
 * @head:pointer
 * @str: string to be duplicated
 * Return: address of the new element or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nu_node, *last_node;
	char *dpct;
	int len;

	nu_node = malloc(sizeof(list_t));

	if (nu_node == NULL)
		return (NULL);

	dpct = strdup(str);
	if (str == NULL)
	{
		free(nu_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	nu_node->str = dpct;
	nu_node->len = len;
	nu_node->next = NULL;

	if (*head == NULL)
		*head = nu_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = nu_node;
	}
	return (*head);
}
