#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initialized with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *create_array = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
if (create_array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
create_array[i] = c;
}
return (create_array);
}
