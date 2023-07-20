#include "main.h"

/**
 * print_line - Prints a line of underscores followed by a newline.
 *
 * @n: The number of underscores to print.
 *
 * Description:
 * This function prints a line of underscores (`_`) followed by a newline
 * character (`\n`). The number of underscores to print is determined by the
 * integer argument `n`.
 *
 * Return: void (no return value)
 */
void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
