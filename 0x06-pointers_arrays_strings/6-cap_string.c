#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @s: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
char *start = s;
int capitalize = 1;
while (*s != '\0')
{
if (*s == ' ' || *s == '\t' || *s == '\n' ||
*s == ',' || *s == ';' || *s == '.' ||
*s == '!' || *s == '?' || *s == '\"' ||
*s == '(' || *s == ')' || *s == '{' || *s == '}')
{
capitalize = 1;
}
else if (capitalize && *s >= 'a' && *s <= 'z')
{
*s = *s - 32;
capitalize = 0;
}
s++;
}
return (start);
}
