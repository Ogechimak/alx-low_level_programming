#include "hash_tables.h"

/**
 * hash_table_print - this is a function that prints a hash table
 * @ht: the pointer to a hash table
 * Return: return Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count;
	hash_node_t *head;

	if (ht == NULL)
		return;
	count = hash_node_count(ht);
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (count > 1)
			{
				printf(", ");
				count--;
			}
			head = head->next;
		}
	}
	printf("}\n");
}



/**
 * hash_node_count - function that count a hash node inside a hash table
 * @ht: the pointer
 * Return: return the number of the items inside the hash table
 */

unsigned long int hash_node_count(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *head;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			count++;
			head = head->next;
		}
	}
	return (count);
}
