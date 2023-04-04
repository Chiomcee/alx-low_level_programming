#include "lists.h"

/**
 * free_listint - Function that frees a listint_t
 * @head: A pointer to the head of the listint_t to be freed
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
