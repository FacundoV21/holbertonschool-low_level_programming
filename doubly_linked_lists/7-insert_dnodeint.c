#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	insert_dnodeint_at_index - adds an element to a list.
 *	@h: pointer to the first node of a list.
 *	@idx: index where to put the node.
 *	@n: int to put into the node.
 *	Return: the number of nodes of the list.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *link, *actual;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	actual = *h;

	while (i < idx && actual != NULL)
	{
		actual = actual->next;
		i++;
	}

	if (actual == NULL)
		return (NULL);

	if (actual->next == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	else if (i == idx)
	{
		link = malloc(sizeof(dlistint_t));
		if (link == NULL)
			return (NULL);

		link->n = n;
		link->next = actual->next;
		link->prev = actual;
		actual->next = link;
		(link->next)->prev = link;
	}
	else
		return (NULL);

	return (link);
}
