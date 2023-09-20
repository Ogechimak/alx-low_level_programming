#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: parameter 1
 * Return: return n
 */

char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (n[i] == s1[i])
	{
	n[i] = s2[i];
	}
	}
	}
	return (n);
}
