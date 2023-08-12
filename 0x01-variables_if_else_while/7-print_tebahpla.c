#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse, followed by a new line.
 * Only putchar is allowed
 * all your code should be in the main function
 * You can only use putchar twice in your code
 * return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
