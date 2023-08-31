#include "main.h"

/**
 *_strlen_recursion - a function that returns the length of a string
 *@s: the string parameter
 *Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	/*base case check*/
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
