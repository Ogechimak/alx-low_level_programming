#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: the pointer
 * @index: the index of the node
 * Return: return 1 if the deletion succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int i = 0;
	listint_t *temp = current->next;

	if (head == NULL || *head == NULL)
	{
	return (-1);
	}

	if (index == 0)
	{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	while (current != NULL && i < index - 1)
	{
	current = current->next;
	i++;
	}

	if (current == NULL || current->next == NULL)
	{
	return (-1);
	}

	current->next = temp->next;
	free(temp);

	return (1);
}
