#include "main.h"

/**
 *set_string - a function that sets the value of a pointer to a char
 *@s: the pointer
 *@to: the value we are going to set the pointer to
 */

void set_string(char **s, char *to)
{

	*s = to;
}
