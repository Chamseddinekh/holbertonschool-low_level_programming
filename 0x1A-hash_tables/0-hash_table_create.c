#include "hash_tables.h"
/**
 *hash_table_create - function that creates a hash table.
 *@size: ize of the array
 *Return: a pointer to the newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable;
hashtable = malloc(sizeof(hash_table_t));
if (hashtable == NULL)
return (NULL);

hashtable->array = malloc(sizeof(hash_node_t *) * size);
if (hashtable->array == NULL)
{
free(hashtable);
return (NULL);
}

return (hashtable);
}
