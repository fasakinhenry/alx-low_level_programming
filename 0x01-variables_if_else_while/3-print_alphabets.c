#include <stdio.h>

/**
 *main - This receives no argument
 *
 *Return: Alwaysw 0 (Success)
 */

int main(void)
{
	char al1, al2;

	for (al1 = 'a'; al1 <= 'z'; al1++)
	{
		putchar(al1);
	}

	for (al2 = 'A'; al2 <= 'Z'; al2++)
	{
		putchar(al2);
	}
	putchar('\n');
	return (0);
}
