#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the first parameter (what y is raised to)
 *@y: the second parameter (that's raised to x)
 *Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	/*Base case, if y is < 0, return 1*/
	if (y < 0)
		return (-1);
	/*check if y is 0*/
	if (y == 0)
		return (1);
	if (y == 1)
		return (x * y);
	return (x * _pow_recursion(x, y - 1));
}
