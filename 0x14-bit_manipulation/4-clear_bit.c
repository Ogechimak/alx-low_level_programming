#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: the pointer tjat points to the num
 * @index: this is the index from 0
 * Return: return 1 or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
