#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the termina
 * @n: number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
for (i = 0; j < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
