#include "main.h"

/**
 * print_diagonal - Print a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int x, y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');

for (y = 1; y < n; y++)
}
for (x = 0; x < (n - y); x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
