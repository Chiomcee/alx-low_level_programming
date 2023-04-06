#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list safely
 * @h: a double pointer to the head of the list
 *
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	listint_t *tmporay;

	while (*h != NULL)
	{
		k++;
		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		tmporay = (*h)->next;
		free(*h);
		*h = tmporay;
	}
	*h = NULL;
	return (k);
}
