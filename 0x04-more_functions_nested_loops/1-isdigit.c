#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: check digit
 * Return: return 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
