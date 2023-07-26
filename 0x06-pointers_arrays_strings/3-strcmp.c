#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Difference between the first non-matching characters in s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
int j;
while (*s1 != 0 || *s2 != 0)
{
j = *s1 - *s2;
if (j != 0)
{
return (j);
}
else
{
s1++;
s2++;
}
}
return (j);
}
