#include "main.h"

/**
 * _print_rev_recursion - function that prints a string iin reverse
 * @s: data 1
 * Return: return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
