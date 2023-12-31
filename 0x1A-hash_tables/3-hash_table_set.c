#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to add/update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (can be an empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp_node_pointer = NULL;
if (ht == NULL || key == NULL || key[0] == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
temp_node_pointer = ht->array[index];
while (temp_node_pointer != NULL)
{
if (strcmp(temp_node_pointer->key, key) == 0)
{
free(temp_node_pointer->value);
temp_node_pointer->value = strdup(value);
if (temp_node_pointer->value == NULL)
{
return (0);
}
return (1);
}
temp_node_pointer = temp_node_pointer->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
