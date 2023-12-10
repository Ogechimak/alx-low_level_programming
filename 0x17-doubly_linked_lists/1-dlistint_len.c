#include "lists.h"

/**
 * dlistint_len - function that returns the number of a doubly lineked list
 * @h: pointer
 * Return: return count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
