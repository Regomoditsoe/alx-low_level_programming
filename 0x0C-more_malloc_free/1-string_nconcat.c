#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - A function that concatenates two strings.
 * @s1: string 1
 * @s2: string  2
 * @n: bytes of s2
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, con1 = 0, con2 = 0, l = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (con1 = 0; s1[con1] != '\0'; con1++)
;

for (con2 = 0; s2[con2] != '\0'; con2++)
;

if (n > con2)
n = con2;

l = con1 + n;
s = malloc(l + 1);

if (s == NULL)
return (NULL);

for (i = 0; i < l; i++)

{
if (i < con1)
s[i] = s1[i];
else

s[i] = s2[i - con1];
}

s[i] = '\0';

return (s);
}
