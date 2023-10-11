#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print name
 * @name: parameter 1
 * @f: pointer to function
 * Return: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
