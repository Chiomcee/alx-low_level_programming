#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of a list
 * @**h: pointer to a pointer to the head of the list
 * @n: an integer to store in the new node
 * Return: address of new node or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
