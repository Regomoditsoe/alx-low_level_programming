#include "lists.h"

/**
 * *add_node - A function that adds a new node
 * at the beginning of a list_t list
 * @str: string to diplicate
 * @head: address to pointer
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;


	list_t *node = malloc(sizeof(list_t));

	if (!head == NULL)
		return (NULL);

	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = strlen(node->str);
	}
	node->next = *head;
	*head = node;

	return (node);
}
