#include "main.h"
#include <stdlib.h>

/**
 * create_array - it create and initializes with specific char
 * @size: the parameter 1
 * @c: the parameter 2
 * Return: return a pointer or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
