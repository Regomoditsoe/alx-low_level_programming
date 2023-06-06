#include "lists.h"

/**
 * pop_listint - A function that deletes the head of
 * a node and return's the head node's data(n)
 * @head: pointer
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *nd;
	int dlt;

	if (head == NULL || *head == NULL)
		return (0);

	nd = *head;
	*head = nd->next;
	dlt = nd->n;
	free(nd);

	return (dlt);
}
