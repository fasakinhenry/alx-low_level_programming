#include <stdio.h>
/**
 * code - main block
 * Desctiption - Use 'Putchar' to print all the letters of the alphabet except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while( a <= 'z')
	{
		if ( a != 'q' || a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
