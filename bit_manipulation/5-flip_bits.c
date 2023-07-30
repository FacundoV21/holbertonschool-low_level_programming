#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 *	flip_bits - Returns the amount of bits that have to be fliped to get from
 *	a num to another.
 *	@n: First number
 *	@m: Second number
 *	Return: Amount of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;
	unsigned long int num = 0;

	num = n ^ m;
	while (num >= 1)
	{
		if (num & 1)
			cont++;
		num >>= 1;
	}
	return (cont);
}
