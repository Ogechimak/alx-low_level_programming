#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: data 1 argument of number
 * @argv: data 2 array of argument
 * Return: return 0
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

