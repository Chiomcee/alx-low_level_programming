#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t list.
 * @head: A pointer to the head of the linked list
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *after;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;
	return (*head);
}
