#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9
 */
void times_table(void)
{
int i, j;
int result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (result < 10 && j != 0)
{
_putchar(' ');
}
else if (result >= 10)
{
_putchar(result / 10 + '0');
}
_putchar(result % 10 + '0');
}
_putchar('\n');
}
}
