#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);


/**
 * shash_table_create - Create a new sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
     shash_table_t *new_table = NULL;
     unsigned long int i;

     new_table = malloc(sizeof(shash_table_t));
     if (new_table == NULL)
         return (NULL);

     new_table->array = malloc(sizeof(shash_node_t) * size);
     if (new_table->array == NULL)
     {
         free(new_table);
         return (NULL);
     }
     for (i = 0; i < size; i++)
     {
         new_table->array[i] = NULL;
     }
     new_table->shead = NULL;
     new_table->stail = NULL;

     return (new_table);
}

