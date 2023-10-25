#include "main.h"

/**
 * factorial -  returns factorial of a given num using recursion
 * @n: number whose factorial is needed
 *
 * Return: factorial of a given number
 * when n < 0 returns -1
 * when n = 0 returns 1
*/

int factorial(int n)
{
	/* Base case */
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
