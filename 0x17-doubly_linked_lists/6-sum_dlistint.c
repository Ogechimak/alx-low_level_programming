#include "lists.h"

/**
 * sum_dlistint - function that sum all data
 * @head: the pointer
 * Return: the sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
