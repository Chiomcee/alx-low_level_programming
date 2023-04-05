#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node = 0;

	if (!head)
		exit(98);
	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		node++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			node = 0;
			head = head->next;
			slow = head;
			fast = head;
			while (head != slow)
			{
				node++;
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	node++;
	printf("[%p] %d\n", (void *)slow, slow->n);
	while (slow->next != head)
	{
		node++;
		slow = slow->next;
		printf("[%p] %d\n", (void *)slow, slow->n);
	}
	return (node);
}
