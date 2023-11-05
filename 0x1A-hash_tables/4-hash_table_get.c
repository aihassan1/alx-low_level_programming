#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to search for.
 *
 * Return: If key is found - the value associated with the key.
 *         If key is not found or an error occurs - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *temp_node_ptr = NULL;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

temp_node_ptr = ht->array[index];

if (temp_node_ptr == NULL)
{
return (NULL);
}

while (temp_node_ptr != NULL) 
{
if (strcmp(key, temp_node_ptr->key) == 0)
{
return (temp_node_ptr->value);
}
temp_node_ptr = temp_node_ptr->next;
}
return (NULL);
}