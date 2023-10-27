#include "main.h"

/**
 * print_binary - functin that prints the binary representation
 * @n: the integer num
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int flow;

	for (i = 63; i >= 0; i--)
	{
		flow = n >> i;

		if (flow & 1)
	{
		_putchar('1');
		count++;
	}
	else if (count)
		_putchar('0');
	}
	if (!count)
	_putchar('0');
}
