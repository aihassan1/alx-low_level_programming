#include "main.h"

/**
 * string_toupper - Converts all lowercase characters in a string to uppercase.
 * @s: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
char *start = s;
while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
*s = *s - 32;
s++;
}
return (start);
}
