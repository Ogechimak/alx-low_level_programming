#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: the pointer to the head of the list.
 * Return: return the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
{
	len++;
	h = h->next;
	}

	return (len);
}
