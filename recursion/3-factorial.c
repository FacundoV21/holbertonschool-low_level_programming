#include "main.h"

/**
 * factorial - Returns the result of doing factorial on n
 * @n: the num to do factorial on
 * Return: The result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
