#include "lists.h"

/**
 * dlistint_len - returns number of element in a linked dlistint_t list
 * @h: head of the dlistint_t list
 *
 * Return: number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
