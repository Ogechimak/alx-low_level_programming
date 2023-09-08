#include <stdio.h>
/**
 * main - print a program that write alphabet in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
	putchar(letter);
	}

	putchar('\n');
	return (0);
}
