#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the chracter of c
 * @c: character to print
 * Retuen: 1 if success
 * on error, -1 is to be returned
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
