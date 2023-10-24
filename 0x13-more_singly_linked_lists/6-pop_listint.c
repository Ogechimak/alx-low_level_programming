#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: the pointer to a pointer to the head of the list.
 * Return: the head node data, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
	{
	return (0);
	}

	current = *head;
	data = current->n;

	*head = current->next;
	free(current);

	return (data);
}
