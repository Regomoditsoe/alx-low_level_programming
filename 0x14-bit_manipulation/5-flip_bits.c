#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: Return number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m, f = 0;

	while (i > 0)
	{
		if (i & 1ul)
			f++;
		i = i >> 1;
	}
	return (f);
}
