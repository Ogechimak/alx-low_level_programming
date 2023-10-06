#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory
 * @b: parameter 1
 * Return: return a pointer to the allocatted memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
