#include "hash_tables.h"
#include <stdlib.h>

/**
 *	hash_table_create - creates a hash table
 *	@size: size of the hash table
 *	Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **arr;

	tab = malloc(sizeof(hash_table_t));

	if (tab == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);

	if (arr == NULL)
		return (NULL);

	tab->size = size;
	tab->array = arr;

	return (tab);
}
