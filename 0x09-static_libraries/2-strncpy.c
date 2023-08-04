#include "main.h"

/**
 * _strncpy - Copies at most n characters from the source
 *string to the destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *start = dest;
for (i = 0; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}
for ( ; i < n; i++)
{
*dest = '\0';
dest++;
}
return (start);
}
