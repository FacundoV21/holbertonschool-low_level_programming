#include "lists.h"
#include <stdio.h>

/**
 *	print_dlistint - Prints the elements of a list.
 *	@h: List to be printed.
 *	Return: the number of nodes of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
