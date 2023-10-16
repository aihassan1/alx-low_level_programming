#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter.
 *
 * @c: The character to be checked (of type char).
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 *
 * Description:
 * This function determines whether the input character 'c' is an uppercase
 * by comparing its ASCII value with the range of uppercase letters (A-Z).
 * returns 1 if uppercase ; otherwise, it returns 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
