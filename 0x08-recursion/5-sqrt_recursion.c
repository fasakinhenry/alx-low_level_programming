#include "main.h"

int check_sqrt(int num, int root);

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