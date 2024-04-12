#include "search_algos.h"

/**
 * linear_search - function that search for the algorithm
 * @array: is the pointer to the first element
 * @size: is the number of the element in the array
 * @value: is the value to search for
 * Return: return -1 if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);

}
