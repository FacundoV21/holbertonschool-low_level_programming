#include "main.h"

/**
 * calcul - Returns a 1 if n prime and 0 otherwise
 * @n: the num to calculate
 * @a: number reiterated and incremented in recursion
 * Return: The result
 */

int calcul(int n, int a)
{
	if ((n < 2) || (n % a == 0 && a != 1 && a != n))
		return (0);

	else if (n % a == 0 && a == n)
		return (1);

	else
		return (calcul(n, a + 1));
}

/**
 * is_prime_number - returns the natural square roiot of a number
 * @n: number
 * Return: Square root of the number
 */

int is_prime_number(int n)
{
	return (calcul(n, 1));
}
