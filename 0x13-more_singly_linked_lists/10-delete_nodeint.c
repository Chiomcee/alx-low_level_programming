#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node of a list
 * @head: A pointer to the head of the list
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp, *current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	temp = current->next;
	for (x = 1; temp != NULL && x <= index; x++)
	{
		if (x == index)
		{
			current->next = temp->next;
			free(temp);
			return (1);
		}

		current = temp;
		temp = temp->next;
	}

	return (-1);
}

