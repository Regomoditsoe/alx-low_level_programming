#include "main.h"

/**
 * get_endianness - A function that checks endianness
 *
 * Return: if big endian - 0
 * if small endian - 1
 */
int get_endianness(void)
{
	int i = 1;

	i = (*(char *) &i);

	return (i);
}
