#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int k;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (k = 0; current != NULL && k < index; k++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
