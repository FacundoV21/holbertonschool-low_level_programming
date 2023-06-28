#include "main.h"

/**
 * calcul - Returns the square root of a num
 * @n: the num to calculate
 * @a: number reiterated and incremented in recursion
 * Return: The result
 */

int calcul(int n, int a)
{
	if (a * a  > n)
		return (-1);

	if (a * a == n)
		return (a);

	if (a * a < n)
		return (calcul(n, a + 1));

	else
		return (0);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: Square root of the number
 */

int _sqrt_recursion(int n)
{
	return (calcul(n, 1));
}
