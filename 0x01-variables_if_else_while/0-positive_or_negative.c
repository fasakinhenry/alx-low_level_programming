#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	// Check code to see the possible conditions of the last digit
	if (n < 5)
		printf("Last digit of %d\n", n, "and is greater than 5");
	return (0);
}
