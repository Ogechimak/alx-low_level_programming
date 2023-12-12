#include "main.h"
#include <stddef.h>
/**
 * _strchr - functions that locates a character in a string
 * @s: data 1
 * @c: data 2
 * Return: return s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}

	if (*s == c)
	return (s);
	return (NULL);

}
