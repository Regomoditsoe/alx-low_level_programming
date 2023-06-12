#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write the file
 * Return: if fiename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int a, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(a, text_content, len);

	if (a == -1 || wr == -1)
		return (-1);

	close(a);
	return (1);
}
