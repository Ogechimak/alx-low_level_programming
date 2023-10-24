#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: the pointer to the head of the list.
 * @index: the index of the node, starting at 0.
 * Return: return NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
	if (i == index)
	{
	return (current);
	}
	current = current->next;
	i++;
	}

	return (NULL);
}
