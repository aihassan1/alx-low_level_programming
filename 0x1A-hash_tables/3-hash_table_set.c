#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
  unsigned long int index;
  hash_node_t *current_node = NULL;
  hash_node_t *new_node;

  if (ht == NULL || key == NULL || key[0] == '\0')
    return (0);

  index = key_index((const unsigned char *)key, ht->size);

  current_node = ht->array[index];

  while (current_node != NULL)
{
    if (strcmp(current_node->key, key) == 0)
	{
      free(current_node->value);
      current_node->value = strdup(value);
      if (current_node->value == NULL)
	  {
        return (0);
      }
      return (1);
    }
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

  new_node->next = current_node;

  ht->array[index] = new_node;

  return (1);
}