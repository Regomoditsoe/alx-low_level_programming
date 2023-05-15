#include "main.h"
#include <stdlib.h>

/**
 * *create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char to specify
 * @size: size of array
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
		str[1] = c;

	return (str);
}
