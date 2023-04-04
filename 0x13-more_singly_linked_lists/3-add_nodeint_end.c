#include "lists.h"

/**
 * add_nodeint_end - Function that adds new node at the end of a list
 * @head: pointer to a pointer to the head of the list
 * @n: the integer to be stored in the new node
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (newnode);

}
