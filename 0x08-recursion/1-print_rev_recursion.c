#include "main.h"

/**
 *_print_rev_recursion - a function that prints a string in reverse
 *@s: the string to be printed in a reverse manner
 */

void _print_rev_recursion(char *s)
{
	/*create a base case*/
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
