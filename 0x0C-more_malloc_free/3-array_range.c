#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int i, j = 0;
int size = max - min + 1;
int *array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);

if (min > max)
return (NULL);

for (i = min; i <= max; i++)
{
array[j] = i;
j++;
}

return (array);
}
