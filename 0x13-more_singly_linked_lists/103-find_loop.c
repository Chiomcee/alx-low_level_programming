#include "lists.h"

/**
 * find_listint_loop – function that finds the loop in a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return:  address of node where loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowrace = head, *fastrace = head;

	while (slowrace && fastrace && fastrace->next)
	{
		slowrace = slowrace->next;
		slowrace = fastrace->next->next;
		if (slowrace == fastrace)
		{
			slowrace = head;
			while (slowrace && fastrace)
			{
				if (slowrace == fastrace)
					return (slowrace);
				slowrace = slowrace->next;
				fastrace = fastrace->next;
			}
		}
	}
	return (NULL);
}
