#include "main.h"

/**
 * create_file - function that appends text
 * @filename: the file name
 * @text_content: this is a string terminated by NULL
 * Return: return 1
 */

int create_file(const char *filename, char *text_content)
{
	int i, mop;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	else
	i = 0;

	mop = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	write(mop, text_content, i);

	if (mop == -1)
		return (-1);
	close(mop);
	return (1);
}
