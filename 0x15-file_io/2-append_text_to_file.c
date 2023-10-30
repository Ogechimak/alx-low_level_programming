#include "main.h"
/**
 * append_text_to_file - function that appends text
 * @filename: this is the name of the file
 * @text_content: this is the NULL terminated string
 * Return: return 1;
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, mop;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i];)
		i++;
	mop = open(filename, O_WRONLY | O_APPEND);
	write(mop, text_content, i);

	if (mop == -1)
		return (-1);
	close(mop);
	return (1);
}
