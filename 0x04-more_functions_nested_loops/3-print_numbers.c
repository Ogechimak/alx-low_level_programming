#include "main.h"
#include <unistd.h>

/**
 * print_numbers - print numbers
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');
}
