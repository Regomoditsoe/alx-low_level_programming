#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: if no element matches return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
