#include "main.h"

/**
 * _strlen_recursion - returns length of string using recursion,
 * @s: string parameter to be used
 *
 * Return: Length of the string
 * when there is no string again, returns 0
*/

int _strlen_recursion(char *s)
{
	/* Base check */
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
