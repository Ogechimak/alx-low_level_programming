#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: this is the filename.
 * @letters: this is the number of letters that should read and print
 * Return: return 0 if filename is 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t mrd, mwr;
	char *buf;

	if (!filename)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	return (0);

	mrd = read(fd, buf, letters);
	mwr = write(STDOUT_FILENO, buf, mrd);

	close(fd);

	free(buf);

	return (mwr);
}
