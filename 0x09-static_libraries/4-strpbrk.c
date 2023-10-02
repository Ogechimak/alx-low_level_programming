#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for anny of a set of bytes
 * @s: data 1
 * @accept: data 2
 * Return: return s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	const char *a = accept;

	while (*a != '\0')
	{
	if (*s == *a)
	return (s);
	a++;
	}
	s++;
	}
	return (NULL);
}
