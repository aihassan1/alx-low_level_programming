#include "hash_tables.h"
/**
 * key_index - Get the index of a key in a hash table
 * @key: The key to hash and find the index for
 * @size: The size of the hash table
 *
 * Return: The index at which the key should be stored in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size) 
{
unsigned long int hashed_value;

if (key == NULL || key[0] == '\0' )
{
return (0);
}

hashed_value = hash_djb2(key) % size;
return (hashed_value);
}