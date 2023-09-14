#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line
 * @n: character parameter
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');

	}

	else
	{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
	for (b = 0; b < n; b++)
	{
	if (b == a)
	_Putchar('\\');
	else if (b < a)
	_putchar('');
	}
	_putchar('\n');
	}
	}
}
