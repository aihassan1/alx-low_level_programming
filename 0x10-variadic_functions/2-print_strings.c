#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings followed by a separator and a newline.
* @separator: The string to be printed between the strings (can be NULL).
* @n: The number of strings passed to the function.
* ...: The strings to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list crosser;
va_start(crosser, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(crosser, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(crosser);

}
