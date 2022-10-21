#include "hash_tables.h"

/**
 * hash_table_print - Print whole the hash table.
 * @ht: Hash table.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, flag = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	putchar('{');
	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		if (current != NULL)
		{
			while (current != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
