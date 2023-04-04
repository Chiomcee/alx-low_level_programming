#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t and set the head to NULL
 * @head: pointer to head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}

	*head = NULL;
}

