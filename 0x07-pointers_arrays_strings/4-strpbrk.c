#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing the set of characters to match.
 *
 * Return: Pointer to the first occurrence of a character from 'accept' in 's',
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *ptr = accept;
while (*ptr != '\0')
{
if (*ptr == *s)
{
return (s);
}
ptr++;
}
s++;
}
return (0);
}
