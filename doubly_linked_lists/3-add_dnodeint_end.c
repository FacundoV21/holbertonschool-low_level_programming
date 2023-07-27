#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	add_dnodeint_end - adds an element to a list.
 *	@head: pointer to the first node of a list.
 *	@n: int to put into the node
 *	Return: the number of nodes of the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *link, *actual;

	link = malloc(sizeof(dlistint_t));

	if (link == NULL)
		return (NULL);

	actual = *head;
	link->n = n;
	link->next = NULL;

	if (*head == NULL)
	{
		link->prev = NULL;
		*head = link;
	} else
	{
		while (actual->next != NULL)
			actual = actual->next;

		actual->next = link;
		link->prev = actual;
	}
	return (link);
}
