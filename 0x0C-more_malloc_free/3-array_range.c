#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: The pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
