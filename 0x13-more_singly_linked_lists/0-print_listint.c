#include "lists.h"

/**
 * print_listint -    function that prints all element of a list
 * @h: pointer to the head of the list
 * Return: number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count += 1;
	}
	return (count);
}
