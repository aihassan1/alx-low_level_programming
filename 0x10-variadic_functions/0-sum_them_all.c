#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all variable
 * numbers of unsigned integers.
 * @n: The number of arguments
 * @...: The unsigned integers to be summed
 *
 * Return: The sum of the provided unsigned ints.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;
unsigned int num;

va_list nptr;
va_start(nptr, n);

for (i = 0; i < n; i++)
{
num = va_arg(nptr, unsigned int);
sum = sum + num;
}

va_end(nptr);

return (sum);
}
