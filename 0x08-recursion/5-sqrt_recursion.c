#include "main.h"

/**
 * check_sqrt - gives the natural square root of a number
 * @num: Number to be checked
 * @root: Iterator of number to see which iteration
 * matches the root of the @num above
 *
 * Return: natural root is number has natural root
 * else, -1 is returned
*/

int check_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if ((root * root) > num)
		return (-1);
	return (check_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns length of string using recursion,
 * @n: Parameter whose square root is needed
 * 
 * Return: natural square root of a number
 * if n has no natural sqaure root, return -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(check_sqrt(n, 0));
}