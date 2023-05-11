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
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural squre root
 * @n: number to calculate square root
 * @i: iterate number
 * Return: Natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = 1 * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
