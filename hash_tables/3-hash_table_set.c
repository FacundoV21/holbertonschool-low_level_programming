#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table where to add element
 * @key: string used to generate hash value
 * @value: to be added to new node
 * Return: 1 if succeded, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int ub;
	hash_node_t *new, *move;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);
	ub = key_index((const unsigned char *)key, ht->size);
	move = ht->array[ub];

	while (move != NULL && move->key == key)
		move = move->next;
	if (move == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[ub];
		ht->array[ub] = new;
	} else
		move->value = strdup(value);
	return (1);
}
