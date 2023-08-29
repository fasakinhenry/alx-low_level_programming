#include "main.h"
#include <string.h>

/**
 *_memcpy - copies memory area
 *@dest: memory area destination
 *@src: memory area source
 *@n: number of bytes to copy
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = &*dest;

	memcpy(dest, src, n);
	return (ptr_dest);
}
