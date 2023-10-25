#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value of x
 * @y: power to which x will be raised to
 *
 * Return: value of x raised to the power of y
 * if y < 0, return -1
*/

int _pow_recursion(int x, int y)
{
	/* Base case*/
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
