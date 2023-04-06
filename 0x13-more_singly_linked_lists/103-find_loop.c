#include "lists.h"

/**
 * find_listint_loop – Function that find loop
 * @head: pointer to the head
 *
 * Return: address of node where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowrace = head, *fastrace = head;

	while (slowrace && fastrace && fastrace->next)
	{
		slowrace = slowrace->next;
		fastrace = fastrace->next->next;
		if (slowrace == fastrace)
		{
			slowrace = head;
			while (slowrace != fastrace)
			{
				slowrace = slowrace->next;
				fastrace = fastrace->next;
			}
			return (slowrace);
		}
	}
	return (NULL);
}
