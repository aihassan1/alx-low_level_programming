#include "main.h"

/**
 *_isdigit - Checks if a character is a digit (0 to 9).
 *
 *@c: The character to be checked (of type char).
 *
 *Return: 1 if the character is a digit, 0 otherwise.
 *
 *Description:
 *This function checks whether the input character 'c' is a digit (0 to 9)
 *by comparing its ASCII value with the range of digits in the ASCII table.
 *If 'c' is a digit, the function returns 1; otherwise, it returns 0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
