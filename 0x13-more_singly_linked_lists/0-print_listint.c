#include "lists.h"

/**
 * print_listint - Function that prints all elements of a list
 * @h: pointing to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next, node++;
	}

	return (node);
}
