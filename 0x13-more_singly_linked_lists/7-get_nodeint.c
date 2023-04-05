#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *				of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0.
 *
 * Return: if the node doe not exist, return NULL, else,
 *		return a pointer to the nth node of the listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *choice = head;
	unsigned int i = 0;

	while (choice != NULL)
	{
		if (i == index)
			return (choice);

		i++;
		choice = choice->next;
	}

	return (NULL);
}
