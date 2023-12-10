#include "lists.h"

/**
 * get_dnodeint_at_index - function that get node of a dlistint_t
 * @head: pointer to the head node
 * @index: the index
 * Return: the node or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;
	return (head);
}
