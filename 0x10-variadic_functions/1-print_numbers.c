#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers followed by a separator and a newline.
* @separator: The string to be printed between numbers (can be NULL).
* @n: The number of integers passed to the function.
* ...: The integers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list crosser;
va_start(crosser, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(crosser, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(crosser);
}
