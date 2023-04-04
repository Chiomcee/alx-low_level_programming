#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: doulbe pointer to the head node of the list
 * Return: the head node's data(n),or 0 is the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (i);
}
