#include "main.h"

/**
 * factorial - the function that returns the factorial of a gibven number
 * @n: the return parameter
 * Return: return 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
