#include "main.h"
#include <string.h>

/**
 *_strchr - locates a character in a string
 *@s: the string to check for the character
 *@c: the character to check for in the string
 *Return: a pointer to the first occurence of the letter c in the string s
 */

char *_strchr(char *s, char c)
{
	char *ptr_check = strchr(s, c);

	return (ptr_check);
}
