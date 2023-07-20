#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times,
 * followed by a new line.
 *
 * Description:
 * This function prints the numbers from 0 to 14 in a loop,
 * and this loop is repeated 10 times.
 * Each number is printed using the _putchar function.
 *
 * Return: void (no return value)
 */
void more_numbers(void)
{
int i;
int j;

for (j = 0; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
