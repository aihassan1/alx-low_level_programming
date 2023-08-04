#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string (number of characters)
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
s = s + 1;
i++;
}
return (i);
}
