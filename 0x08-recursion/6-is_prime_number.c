#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input int is prime number
 * @n: data 1
 * Return: return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates prime number
 * @n: parameter 1
 * @i: parameter 2
 * Return: return 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
