#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: If the value is not present in the array or if the array is NULL, return -1.
 *         Otherwise, return the index of the value in the array.
 */
int linear_search(int *array, size_t size, int value)
{

    size_t i;

    /*If value is not present in array or if array is NULL, your function must return -1*/
    if (array == NULL || !value)
    {
        return (-1);
    }

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (value == array[i])
        {
            return (i);
        }
    }

    return (-1);
}
