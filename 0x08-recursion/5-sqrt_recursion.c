#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: data that determines what to return
 * Return: return 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - natural square root of a number
 * square root of a number
 * @n: data 1
 * @i: data 2
 * Return: return 0
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
