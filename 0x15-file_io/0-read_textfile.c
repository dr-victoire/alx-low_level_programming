#include "main.t "
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and printsit to the stdout
 * @filename: the filename
 * @letters: the number of letters to read and print
 *
 * Return: the number of bytes to read and print
 * or -1 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w, o;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || w != r || o == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
