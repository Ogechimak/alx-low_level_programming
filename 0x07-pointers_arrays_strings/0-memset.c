#include "main.h"

/**
 * _memset - the function that fills memory with a constant byte
 * @s: data 1
 * @b: data 2
 * @n: data 3
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

