#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: Pointer to the input string
 */
void puts2(char *str)
{
while (*str != '\0')
{

_putchar (*str);
str++;
if (*str == '\0')
break;
str++;
}
_putchar ('\n');
}
