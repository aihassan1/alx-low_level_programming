#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 * Description:
 * This function prints the numbers from 0 to 9 on separate lines using the
 * _putchar function. It iterates through a loop, where the loop variable 'i'
 * takes values from 0 to 9, and each number is printed followed by a newline.
 *
 * Return: void (no return value)
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
