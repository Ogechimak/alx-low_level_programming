#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: the pointer to the head of the list
 * Return: return 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
