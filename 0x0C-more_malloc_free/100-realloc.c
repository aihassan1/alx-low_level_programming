#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Size of the old memory block.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the reallocated memory block, or NULL if failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new = malloc(new_size);

if (new == NULL)
return (NULL);

if (ptr == NULL)
{
new = malloc(new_size);
return (new);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);

strcpy(new, ptr);
free(ptr);
return (new);
}
