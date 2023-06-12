#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and
 * prints to the POSIX standard output
 * @letters: number of letters to read and print
 * @filename: text file read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t a, wr, r;

	if (!filename || !letters)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	r = read(a, b, letters);
	wr = write(STDOUT_FILENO, b, r);

	free(b);
	close(a);
	return (wr);

}
