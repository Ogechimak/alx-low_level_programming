#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: the pointer
 * @index: the index of the node
 * Return: return 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)

	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);

	return (1);
	}

	while (i < index - 1)
	{
	if (!temp || !(temp->next))

	return (-1);
	temp = temp->next;
	i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
