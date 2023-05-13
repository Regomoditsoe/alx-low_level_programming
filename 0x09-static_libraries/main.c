#include <stdio.h>
#include "main.h"

int main(void)
{
char haystack[] = "This is a sample string";
char needle[] = "sample";

char *result = _strstr(haystack, needle);

if (result != NULL)
{
printf("Substring found at position: %ld\n", result - haystack);
}
else
{
printf("Substring not found.\n");
}

return 0;
}
