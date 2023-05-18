#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - A function that allocates memory for an array,
 * using malloc
 * @nmemb: elements
 * @size: size of bytes
 * Return: NULL if If nmemb or size is 0, then _calloc
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;

	return (c);
}
