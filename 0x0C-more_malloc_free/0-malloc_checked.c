#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory needed to allocate
 *
 * Return: Pointer to the allocated memory.
 *          If malloc fails, function exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *space = malloc(b);
if (space == NULL)
{
free(space);
exit(98);
}
return (space);
}
