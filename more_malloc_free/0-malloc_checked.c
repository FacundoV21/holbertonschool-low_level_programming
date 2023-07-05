#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Reurn: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
