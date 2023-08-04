#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print - prints a hash table
 * @ht: hash table where to retrieve value
 * Return: value associated with the element or NULL if key wasnt found
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ub = 0;
	char n = 0;
	hash_node_t *move;

	if (ht != NULL)
	{
		printf("{");
		while (ub < ht->size)
		{
			move = ht->array[ub];
			while (move != NULL)
			{
				if (n)
					printf(", ");
				printf("\'%s\': \'%s\'", move->key, move->value);
				move = move->next;
				n = 1;
			}
			ub++;
		}
		printf("}\n");
	}
}
