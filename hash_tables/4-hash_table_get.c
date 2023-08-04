#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_get - adds an element to the hash table
 * @ht: hash table where to retrieve value
 * @key: string used to generate hash value
 * Return: value associated with the element or NULL if key wasnt found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    int ub;
    hash_node_t *move;

    if (key == NULL || *key == '\0' || ht == NULL)
        return (0);

    ub = key_index((const unsigned char *)key, ht->size);
    move = ht->array[ub];

    while (move != NULL && strcmp(move->key, key) != 0)
        move = move->next;

    if (move == NULL)
        return (NULL);
    else
        return (move->value);
}