#include "lists.h"

/**
 * find_listint_loop - function that finds a loop in a linked list.
 * @head: the pointer to the head
 * Return: return NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;
	
	if (head == NULL)
	{
	return (NULL);
	}

	while (hare != NULL && hare->next != NULL)
	{
	tortoise = tortoise->next;
	hare = hare->next->next;

	if (tortoise == hare)
	{
	tortoise = head;
	while (tortoise != hare)
	{
	tortoise = tortoise->next;
	hare = hare->next;
	}
	return (tortoise);
	}
	}
	return (NULL);
}
