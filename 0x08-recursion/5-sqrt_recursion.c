#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - A function that returns
 * the natural square root of a number
 * @n: the number to calculate suare root of
 *
 * Return: Natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - calculate natural squre root
 * @n: number to calculate square root
 * @i: iterate number
 * Return: Natural square root
 */
int _sqrt(int n, int i)
{

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
