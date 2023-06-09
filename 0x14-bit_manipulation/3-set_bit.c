#include "main.h"

/**
 * set_bit - A function that sets he value of a
 * bit to 1 at a given index
 * @index: index
 * @n: pointer
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (!!(*n |= 1L << index));
}
