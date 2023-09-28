#include "main.h"

/**
 * _strlen_recursion - function that return the length of a string
 * @s: data 1
 * Return: return 0
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
