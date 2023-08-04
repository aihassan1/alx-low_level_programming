#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing the set of characters to match.
 *
 * Return: The number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;

while (*s != '\0')
{
char *accept_ptr = accept;

while (*accept_ptr != '\0')
{
if (*accept_ptr == *s)
{
i++;
break;
}
accept_ptr++;
}

if (*accept_ptr == '\0')
break;
s++;
}
return (i);
}
