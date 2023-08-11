#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string (up to n bytes).
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails or on error.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned  int i, j;
unsigned int size_s1 = strlen(s1);
unsigned int size_s2 = strlen(s2);
char *s3 = malloc(size_s1 + n * sizeof(char) + 1);

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (s3 == NULL)
{
free(s3);
return (NULL);
}

for (i = 0; i < size_s1; i++)
{
s3[i] = s1[i];
}

if (n >= size_s2)
{
for (j = 0; j < size_s2; j++)
{
s3[i] = s2[j];
i++;
}
}
else
{
for (j = 0; j < n; j++)
{
s3[i] = s2[j];
i++;
}
}

return (s3);
}
