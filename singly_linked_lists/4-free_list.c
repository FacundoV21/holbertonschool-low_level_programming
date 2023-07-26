#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *	free_list - frees a list.
 *	@head: pointer to the first node of a list.
 */

void free_list(list_t *head)
{
	list_t *link;

	if (head != NULL)
	{
		link = head;
		head = head->next;
		free(link->str);
		free(link);
		free_list(head);
	}
}
