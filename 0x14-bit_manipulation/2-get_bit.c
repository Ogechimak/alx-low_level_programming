#include "main.h"

/**
 * get_bit - functure that returns the value of a bit
 * @n: this is the integer number
 * @index: this is the index from 0
 * Return: return the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitNum;

	if (index > 63)
		return (-1);

	bitNum = (n >> index) & 1;

	return (bitNum);
}
