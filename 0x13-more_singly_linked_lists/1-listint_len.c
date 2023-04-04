#include "lists.h"

/**
 * lisint_len - function that returns number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodesin the list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
