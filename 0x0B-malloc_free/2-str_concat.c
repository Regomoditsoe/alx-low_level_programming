#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - A function that concatenates two strings.
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = c = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[c] != '\0')
		c++;

	concat = malloc(sizeof(char) * (i + c + 1));

	if (concat == NULL)
		return (NULL);

	i = c = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		concat[i] = s2[c];
		i++, c++;
	}
	concat[i] = '\0';
	return (concat);
}
