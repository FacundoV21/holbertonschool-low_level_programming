#include "lists.h"
#include <stdio.h>

/**
 *	sum_dlistint - returns the sum of all data (n) of a list.
 *	@head: List searh on.
 *	Return: the result of the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
