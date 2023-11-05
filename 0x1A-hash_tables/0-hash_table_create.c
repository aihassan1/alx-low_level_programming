#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the array for the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;

/* Allocating memory for the hash table structure. */
hash_table_t *new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);

/* Allocating memory for the array of linked lists (buckets). */
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

/* Initializing all elements of the array to NULL. */
for (i = 0; i < size; i++)
{
new_table->array[i] = NULL;
}
/* Returning a pointer to the created hash table. */
new_table->size = size;
return (new_table);
}
