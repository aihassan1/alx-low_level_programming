#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp_node;
hash_node_t *temp;

if (ht == NULL)
{
return;
}

for (i = 0; i < ht->size; i++)
{
temp_node = ht->array[i];
while (temp_node != NULL)
{
temp = temp_node->next;
free(temp_node->key);
free(temp_node->value);
free(temp_node);
temp_node = temp;
}
}

free(ht->array);
free(ht);
}
