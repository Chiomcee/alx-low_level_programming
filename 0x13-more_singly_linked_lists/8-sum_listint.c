#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 *		the data(n) of a listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: the sum of all the data (n) of the list,
 *		or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
