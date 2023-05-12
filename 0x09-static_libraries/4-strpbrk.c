#include "main.h"

/**
 * *_strpbrk - A  function that searches a string for any of a set of bytes.
 * @accept: a set of bytes to be searched for
 * @s: string to be searched
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * if no byte is found - NULL
 */

char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
