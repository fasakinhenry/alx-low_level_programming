/* Code headers */
#include <stdio.h>

/* Betty documentation */

/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	for(int x = 'a'; x <= 'z'; x++)
	{
	    putchar(tolower(x));
	}
	return(0);
}
