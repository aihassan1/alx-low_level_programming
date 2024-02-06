#include "search_algos.h"

/**
 * print_array - Prints the elements of an integer array.
 *
 * @array: The array to be printed.
 * @left: The index of the leftmost element to be printed.
 * @right: The index of the rightmost element to be printed.
 */
void print_array(int array[], size_t left, size_t right)
{
	size_t i;

	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	if (right > 0)
	{
		printf("%d", array[right]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array if found; otherwise, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
