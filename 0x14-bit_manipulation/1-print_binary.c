#include "main.h"

/**
 * print_binary - A function that prints the
 * binary representation of a number
 * @n: integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int uli;
	int i, b = 0;

	for (i = 63; i >= 0; i--)
	{
		uli = n >> i;

		if (uli & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
