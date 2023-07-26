#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes from src to be appended.
 *
 * Return: Pointer to the resulting concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
if(n < 0)
{
*ptr = '\0';
}
return (dest);
}
