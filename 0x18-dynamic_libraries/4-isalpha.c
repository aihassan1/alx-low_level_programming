#include "main.h"

/**
 * _isalpha - checks if the input is an alphabetic character.
 *
 * Description: Checks if the input is an upper or lower case char.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the input is a char, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
