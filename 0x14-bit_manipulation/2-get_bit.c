#include "main.h"

/**
 * get_bit - A function that returns the value
 * of a bit at a given index
 * @n: unsigned long int
 * @index: index
 * Returns: the value of the bit at index (either 0 or 1),
 * or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
