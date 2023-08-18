#include <stdio.h>
#include <stdarg.h>

/**
* print_all - Prints values based on format specifiers
* @format: A string containing format specifiers
*          c: char
*          i: int
*          f: float
*          s: char *
*
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
int i;
char *str;
va_list args;
va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (float) va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
if ((format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f' || format[i] == 's') &&
format[i + 1] != '\0')
{
printf(", ");
}
i++;
}
printf("\n");
va_end(args);
}
