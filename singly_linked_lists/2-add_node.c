#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	add_node - adds an element to a list.
 *	@head: pointer to the first node of a list.
 *	@str: string to put into the node
 *	Return: the number of nodes of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *sup;
	list_t *link;

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

	link->str = sup;
	link->len = strlen(sup);
	link->next = *head;
	*head = link;

	return (link);
}
