#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: data 1
 * @needle: data 2
 * Return: return null
 */

char *_strstr(char *haystack, char *needle)
{
	for (;*haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		return (haystack);
	}
	return (0);
}

