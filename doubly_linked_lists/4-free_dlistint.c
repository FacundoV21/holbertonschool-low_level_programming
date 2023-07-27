#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	free_dlistint - frees a list.
 *	@head: pointer to the first node of a list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *link;

	if (head != NULL)
	{
		link = head;
		head = head->next;
		free(link);
		free_dlistint(head);
	}
}
