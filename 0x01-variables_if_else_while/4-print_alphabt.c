#include <stdio.h>
/**
 * main - main block
 * Description: Use 'Putchar' to print all the letters except 'q' and 'e'
 * Return: 0(Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
