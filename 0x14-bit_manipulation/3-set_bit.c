#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * @n: the pointer that points to the numm
 * @index: this is the index from 0 of the bit
 * Return: return 1 or -1 if error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
