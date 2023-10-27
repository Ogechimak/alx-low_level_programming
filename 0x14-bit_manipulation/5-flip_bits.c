#include "main.h"

/**
 * flip_bits - function thar rreturns the num of bits
 * @n: parameter 1
 * @m: parameter 2
 * Return: return the num of bits (count)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int flow;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	flow = exclusive >> i;
	if (flow & 1)
	count++;
	}

	return (count);
}
