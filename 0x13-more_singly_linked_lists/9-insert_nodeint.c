#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - index starts at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	for (x = 0; x < (idx - 1); x++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(newnode);
			return (NULL);
		}

		temp = temp->next;
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
