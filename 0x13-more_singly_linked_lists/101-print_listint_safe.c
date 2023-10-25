#include "lists.h"

/**
 * print_listint_safe - function tnat prints a listint_t list
 * @head: the pointer to the head
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
	node_count++;
	printf("[%p] %d\n", (void *)current, current->n);
	current = current->next;

	if (node_count >= 1024)
	{
	fprintf(stderr, "Reached maximum node count. Exiting with status 98.\n");
	exit(98);
	}
	}

	return (node_count);
}
