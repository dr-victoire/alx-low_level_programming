#include "main.h"

/**
 * read_textfile - reads a textfile and printsit to the stdout
 * @filename: the filename
 * @letters: the number of letters to read and print
 *
 * Return: the number of bytes to read and print
 * or -1 on failure
 */

ssize_t read_textfile(char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (NULL);
	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 ¦¦ w == -1 ¦¦ w != r ¦¦ fd == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}
