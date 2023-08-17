#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: Pointer to the function to be applied to each element
 *
 * Description: This function takes an integer array, its size, and a function
 * pointer 'action', and applies the 'action' function to each element of the
 * array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
