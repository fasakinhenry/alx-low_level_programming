#include <stdio.h>

/**
* main - Prints all the numbers of base 10 starting from 0
* You are not allowed to use any variable of type char
* You can only use `putchar` to print the numbers.
* You can only use `putchar` twice.
* Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
