#include "lists.h"
#include <stdio.h>

/**
 *	dlistint_len - Prints the elements of a list.
 *	@h: List to be printed.
 *	Return: the number of nodes of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
