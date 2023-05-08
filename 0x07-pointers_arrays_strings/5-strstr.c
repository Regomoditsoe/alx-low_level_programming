#include "main.h"

/**
 * *_strstr - A function that locates a substring.
 * @haystack: string to locate substring
 * @needle: substring to be located
 * Return: A pointer to the beginning of the located substring
 * If substring is not found - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
