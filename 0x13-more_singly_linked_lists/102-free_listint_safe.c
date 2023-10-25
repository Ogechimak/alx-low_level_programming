#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t linked
 * @h: the pointer to a pointer to the head
 * Return: return the size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list_size = 0;
	listint_t *current = *h;

	while (current != NULL)
	{
	listint_t *next_node = current->next;

	free(current);
	current = next_node;
	list_size++;
	}

	*h = NULL;

	return (list_size);
}
