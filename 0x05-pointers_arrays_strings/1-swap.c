#include "main.h"

/**
 * swap_int - print the function that swaps the values of two int
 * @a: int 1
 * @b: int 2
 * Return: return count
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
