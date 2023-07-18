#include "main.h"
/**
 * print_alphabet x10 - Prints the lowercase alphabet 10 times
 * followed by a new line
 *
 * Description: Prints all lowercase letters
 * from 'a' to 'z' using the _putchar function.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 0 ; i < 11 ; i++)
{
for (j = 97 ; j < 123 ; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
