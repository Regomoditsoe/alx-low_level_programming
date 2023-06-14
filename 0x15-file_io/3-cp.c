#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * error_file - check from and to files
 * @file_from: to check from
 * @file_to: file to
 * @argv: argument vector
 */
void error_file(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * close_file - A function that closes file descriptors
 * @fd: file descriptors
 */
void close_file(int *fd)
{
	int closef;

	closef = close(*fd);

	if (closef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd);
		exit(100);
	}
}

/**
 * main - main
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to, read1, write1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (buffer == NULL)
		return (0);

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	do {
		read1 = read(file_from, buffer, BUF_SIZE);
		if (read1 == 0)
			break;

		error_file(read1, file_to, argv);
		write1 = write(file_to, buffer, read1);
		error_file(write1, file_to, argv);
		} while (write1 >= BUF_SIZE);

	read1 = close(file_from);
	read1 = close(file_to);
	free(buffer);

	return (0);
}
