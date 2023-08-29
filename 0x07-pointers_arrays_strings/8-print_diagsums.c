#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 *matrix of integers
 *@a: size of matrux
 *@size: array of size a * a
 */

void print_diagsums(int *a, int size)
{

	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum2);
}
