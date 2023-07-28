#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	delete_dnodeint_at_index - deletes an element from a list according to an
 *	index.
 *	@head: pointer to the first node of a list.
 *	@index: index of the node to delete.
 *	Return: 1 if success else -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t  *actual;
	unsigned int i = 0;

	actual = *head;
	if (*head == NULL)
		return (-1);
	else if (actual->next == NULL && index == 0)
	{
		free(actual);
		*head = NULL;
		return (1);
	} else if (actual->next != NULL && index == 0)
	{
		*head = actual->next;
		(*head)->prev = NULL;
		free(actual);
		return (1);
	}
	while (i < index && actual != NULL)
	{
		actual = actual->next;
		i++;
	}
	if (actual == NULL)
		return (-1);
	if (actual->next == NULL)
	{
		(actual->prev)->next = NULL;
		free(actual);
		return (1);
	}
	(actual->prev)->next = actual->next;
	(actual->next)->prev = actual->prev;
	free(actual);
	return (1);
}
