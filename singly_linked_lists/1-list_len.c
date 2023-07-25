#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	list_len - Returns the amount of elements of a list.
 *	@h: List to be printed.
 *	Return: the number of nodes of the list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
