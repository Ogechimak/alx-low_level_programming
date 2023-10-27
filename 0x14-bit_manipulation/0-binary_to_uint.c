#include "main.h"

/**
 * binary_to_uint - function converts a binary number to unsigned int
 * @b: the b is pointing to a string of 0 and 1 chars
 * Return: return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i = 0;

	if (!b)
	return (0);

	while (b[i] != '\0')
	{
	if (b[i] < '0' || b[i] > '1')
	return (0);
	dec_val = 2 * dec_val + (b[i] - '0');
	i++;
	}

	return (dec_val);
}
