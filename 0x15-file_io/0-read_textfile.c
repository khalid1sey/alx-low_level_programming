#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file to read
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(fp, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fp);

	free(buffer);

	return (nwr);
}
