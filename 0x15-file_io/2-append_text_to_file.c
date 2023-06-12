#include "main.h"

/**
 * append_text_to_file - A function that appends a texrt
 * at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminating string
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename,  O_WRONLY | O_APPEND);
	wr = write(i, text_content, len);

		if (i == -1 || wr == -1)
			return (-1);

	close(i);

	return (1);
}
