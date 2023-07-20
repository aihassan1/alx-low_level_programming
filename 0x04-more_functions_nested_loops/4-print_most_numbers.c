#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9
 *(excluding 2 and 4) followed by a new line.
 *
 * Description:
 * This function prints the numbers from 0 to 9 on separate lines using
 * the _putchar function,
 * but it skips printing the numbers 2 and 4.
 * It iterates through a loop, where the loop variable 'i'
 * takes values from 0 to 9, and each number
 * (except 2 and 4) is printed followed by a newline.
 *
 * Return: void (no return value)
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
