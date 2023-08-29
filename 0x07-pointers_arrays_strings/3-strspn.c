#include "main.h"
#include <string.h>

/**
 *_strspn -a function that gets the length of a prefix substring
 *@s: the string segment
 *@accept: the bytess parameter from which the function returns
 *Return: the number of bytes in the initial segment of s which
 *consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int byte_number = strspn(s, accept);

	return (byte_number);
}
