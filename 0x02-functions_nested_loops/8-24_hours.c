#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 *
 * Description: Prints every minute from 00:00 to 23:59 in the format "hh:mm".
 */

void jack_bauer(void)
{
int i;
int j;

for (i = 00; i <= 23; i++)
{
for (j = 00; j <= 59; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
}
