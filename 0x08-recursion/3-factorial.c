#include "main.h"

/**
 * factorial - Calculates the factorial of a non-negative integer
 * @n: The integer to calculate the factorial for
 *
 * Return: Factorial of 'n' if 'n' is non-negative, otherwise, return -1
 */
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
