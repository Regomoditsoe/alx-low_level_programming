#include "lists.h"

/**
 * sum_listint - A function that returns the sum
 * of all the data of a listint_t list
 * @head: pointer
 *
 * Return: sum of  all data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
