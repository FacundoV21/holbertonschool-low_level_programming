#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	get_bit - Returns the value of a bit at index
 *	@n: Unsigned int where to get the bit
 *	@index: index to the bit to be returned
 *	Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	return (n >> index & 1);
}
