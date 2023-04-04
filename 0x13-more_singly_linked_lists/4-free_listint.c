#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @h: A pointer to the head of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *currentnode;

	while (head)
	{
		currentnode = head->next;
		free(head);
		head = currentnode;
	}
}
