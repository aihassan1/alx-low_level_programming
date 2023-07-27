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
while (*s != '\0')
{
while (*s != '\0' && (*s == ' ' || *s == '\t' || *s == '\n' ||
*s == ',' || *s == ';' || *s == '.' ||
*s == '!' || *s == '?' || *s == '\"' ||
*s == '(' || *s == ')' || *s == '{' || *s == '}'))
{
s++;
}
if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
}
while (*s != '\0' && (*s != ' ' && *s != '\t' && *s != '\n' &&
*s != ',' && *s != ';' && *s != '.' &&
*s != '!' && *s != '?' && *s != '\"' &&
*s != '(' && *s != ')' && *s != '{' && *s != '}'))
{
s++;
}
}
return (start);
}
