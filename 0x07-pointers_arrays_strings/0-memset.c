#include "main.h"
#include <string.h>
/**
 *_memset - a function that fills memory with a constant byte
 *@s: the pointer pointing to n
 *@n: the number bytes of the memory area
 *@b: the constant byte
 *
 *Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr_s = &*s;

	memset(s, b, n);
	return (ptr_s);
}
