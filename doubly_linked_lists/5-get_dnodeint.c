#include "lists.h"
#include <stdio.h>

/**
 *	get_dnodeint_at_index - returns the nth node of a list.
 *	@head: List searh on.
 *	@index: Index of the node to return
 *	Return: the number of nodes of the list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	else
		return (NULL);
}
