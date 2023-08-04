#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ub = 0;
	hash_node_t *move, *stay;

	while (ht != NULL && ub < ht->size)
	{
		move = ht->array[ub];
		while (move != NULL)
		{
			stay = move;
			move = move->next;
			free(stay->value);
			free(stay->key);
			free(stay);
		}
		ub++;
	}
	free(ht->array);
	free(ht);
}
