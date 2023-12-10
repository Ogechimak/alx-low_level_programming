#include "lists.h"

/**
 * add_dnodeint - function that returns the number of a doubly lineked list
 * @head: pointer to pointer that point to head node
 * @n: the data
 * Return: address of the new node or NULL if failure occur
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
