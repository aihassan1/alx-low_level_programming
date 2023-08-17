#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which the comparison function
 *         does not return 0, or -1 if no matches are found or size is 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int result = -1;
if (size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
result = i;
break;
}
}
return (result);
}
