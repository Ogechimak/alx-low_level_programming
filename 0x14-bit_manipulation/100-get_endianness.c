
#include "main.h"

/**
 * get_endianness - functions that checks the endianness
 * Return: return 0 for big and 1 for little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
