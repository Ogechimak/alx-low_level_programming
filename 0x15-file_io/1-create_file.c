#include "main.h"

/**
 * create_file - it creates a file
 * @filename: the name of the file create
 * @text_content: it is a terminated string of a NULL
 * Return: return 1
 */

int create_file(const char *filename, char *text_content)
{
	int mop;
	int nletters;
	int mwr;

	if (!filename)
		return (-1);

	mop = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (mop == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	mwr = write(mop, text_content, nletters);

	if (mwr == -1)
		return (-1);

	close(mop);
	return (1);
}
