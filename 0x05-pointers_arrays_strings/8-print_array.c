#include "main.h"

/**
 * print_array - function that print elements of an array
 * @a: number 1
 * @n: number 2
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
	printf("%d", a[i]);

	if (i < n - 1)
	printf(", ");
	}
	printf("\n");
}
