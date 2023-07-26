#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	add_node_end - adds an element at the end of a list.
 *	@head: pointer to the first node of a list.
 *	@str: string to put into the node
 *	Return: pointer to the new node of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *sup;
	list_t *link, *actual;

	if (str == NULL)
		sup = strdup("(nil)");

	else
		sup = strdup(str);

	if (sup == NULL)
		return (NULL);

	link = malloc(sizeof(list_t));

	if (link == NULL)
	{
		free(sup);
		return (NULL);
	}

	actual = *head;
	link->str = sup;
	link->len = strlen(sup);
	link->next = NULL;

	if (actual == NULL)
	{
		*head = link;
	} else
	{
	while (actual->next != NULL)
		actual = actual->next;

	actual->next = link;
	}
	return (link);
}
