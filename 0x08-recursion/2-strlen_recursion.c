#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: Pointer to the string to calculate the length
 *
 * Return: Length of the string (excluding null terminator)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
