#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * Description: Extracts and prints the last digit of the input number.
 *
 * @n: The number from which the last digit will be extracted.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
n = -n;
}
else
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
