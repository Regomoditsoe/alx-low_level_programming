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

	while (s1 && s1[con1])
		con1++;

	while (s2 && s2[con2])
		con2++;

	if (n < con2)
		s = malloc(sizeof(char) * (con1 + n + 1));
	else
		s = malloc(sizeof(char) * (con1 + con2 + 1));

	if (!s)
		return (NULL);

	while (i < con1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < con2 && i < (con1 + 1))
		s[i++] = s2[l++];

	while (n >= con2 && i < (con1 + con2))
		s[i++] = s2[l++];

	s[i] = '\0';

	return (s);
}
