 #include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
while (i > 0)
{
i--;
s--; 
_putchar(*s);
}
_putchar('\n');
}
