#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	return (dest);
}
