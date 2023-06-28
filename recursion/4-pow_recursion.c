#include "main.h"

/**
 * _pow_recursion - Returns the result of multipling x by x y times
 * @x: the num to multiply
 * @y: amount of times to multiply
 * Return: The result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);
}
