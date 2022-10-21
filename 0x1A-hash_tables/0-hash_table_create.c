#include "hash_tables.h"
/**
 * hash_table_create - create hash table with given size
 * @size: size of hash table
 * Return: created hash table
 */
hash_table_t "hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int x;

	table = malloc(sizeof(hash_table_t));
	if (table ==NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		RETURN (NULL);
	for (x = 0; x < size; x++)
		array[x] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
