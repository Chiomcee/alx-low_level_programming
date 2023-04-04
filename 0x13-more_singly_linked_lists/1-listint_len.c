#include "lists.h"

/**
 * lisint_len - function that returns number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodesin the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
