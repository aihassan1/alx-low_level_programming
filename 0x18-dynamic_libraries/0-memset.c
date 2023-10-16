#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the destination memory.
 * @b: Value to be set in each byte.
 * @n: Number of bytes to be set.
 *
 * Return: Pointer to the destination memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr;
ptr = s;
for (i = 0; i < n; i++)
{
*ptr = b;
ptr++;
}
return (s);
}
