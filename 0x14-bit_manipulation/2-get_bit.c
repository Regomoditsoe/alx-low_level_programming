#include "main.h"

/**
 * get_bit - A function that returns the value
 * of a bit at a given index
 * @index: index, starting from 0 of the bit
 * you want to get
 * @n: number of returns
 * Return: valute of the bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return (n >> index & 1);
}
