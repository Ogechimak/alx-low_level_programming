#include "main.h"
/**
 * more_numbers - function to print 10 times the numbers
 * Return: return void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 14; b++)
	{
	if (a > 9)
	_putchar(b / 10 + '0');
	_putchar(b % 10 + '0');
	}
	_putchar('\n');

	}
}
