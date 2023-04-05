#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop_len - finds a loop in a linked list
 *
 * @head: a pointer to the head of the linked list to search
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of nodes in the list
 */
listint_t *find_listint_loop_len(listint_t *head)
{
	listint_t *start, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (start = head; start != end; start = start->next)
			if (start == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints listint_t safely
 * @head: a pointer to the head of the listint_t list
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int node;
	listint_t *loopnode;

	loopnode = find_listint_loop_len((listint_t *) head);

	for (len = 0, node = 1; (head != loopnode || node) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			node = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
