#include "lists.h"

/**
 * free_listint - function that frees
 * @head: the pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
