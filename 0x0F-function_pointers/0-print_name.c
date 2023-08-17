#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to a function that prints the name
 *
 * Description: This function takes a name and a function pointer 'f',
 * and calls the function 'f' to print the name in a specific format.
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
return;
}
}
