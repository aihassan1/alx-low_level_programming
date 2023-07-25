#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the input string
 */
void puts_half(char *str)
{
int i = 0;
char *start = str;

while (*str != '\0')
{
str++;
i++;
}

str = start + i / 2;
if ((i % 2) == 0)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
else
{
str++;
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
_putchar('\n');
}
