#include "main.h"
#include <stdlib.h>

/**
* _calloc -  Allocates memory for an array and initializes with zeros.
* @nmemb: Number of elements in the array.
* @size: Size of each element.
*
* Return: Pointer to the allocated memory, or NULL if failure.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int a_size = (nmemb * size);
void *array = malloc(a_size);
char *char_array = array;

if (nmemb == 0 || size == 0)
return (NULL);

if (array == NULL)
{
free(array);
return (NULL);
}

for (i = 0; i < a_size; i++)
{
char_array[i] = 0;
}
free(array);
return (array);
}
