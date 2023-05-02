#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: array name
 * Return: a and n imputs
 */

void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
