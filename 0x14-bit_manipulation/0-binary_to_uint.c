#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		digit = 2 * digit + (b[i] - '0');
	}
	return (digit);
}
