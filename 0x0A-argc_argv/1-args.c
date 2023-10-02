#include "main.h"
#include <stdio.h>

/**
 * main - program that writes the number of argument passed
 * @argc: argument 1
 * @argv: array
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
