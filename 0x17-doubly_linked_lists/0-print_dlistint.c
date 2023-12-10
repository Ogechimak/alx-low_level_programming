#include "lists.h"

/**
 * print_dlistint - function that print all element of a doubly linked list
 * @h: the pointer
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
