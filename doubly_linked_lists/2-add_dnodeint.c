#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	add_dnodeint - adds an element to a list.
 *	@head: pointer to the first node of a list.
 *	@n: int to put into the node
 *	Return: the number of nodes of the list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *link;

	link = malloc(sizeof(dlistint_t));

	if (link == NULL)
		return (NULL);

	link->n = n;
	if (*head == NULL)
	{
		link->next = NULL;
		link->prev = NULL;
		*head = link;
	} else
	{
	link->next = *head;
	link->prev = NULL;
	(*head)->prev = link;
	*head = link;
	}
	return (link);
}
