#include "main.h"

/**
 *factorial - a function that returns the factorial of a give number
 *@n: the number to calculate the factorial
 *Return: the factorial of n the parameter
 */

int factorial(int n)
{
	/*check if the parameter is 1 or less than 1*/
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	/*else return the factorial of the parameter*/
	return (n * factorial(n - 1));
}
