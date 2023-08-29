#include "main.h"
#include <string.h>

/**
*_strpbrk - a function that searches a string for any of a set of bytes
*@s: the string the search is performed on
*@accept: the parameter for the bytes check
*Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr_result = strpbrk(s, accept);

	return (ptr_result);
}
