#include "main.h"

/**
 * _pow_recursion - function that returns values
 * @x: data 1
 * @y: data 2
 * Return: return 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
