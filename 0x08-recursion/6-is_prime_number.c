#include "main.h"

int check_prime(int num, int i)
{
	if (i <= 1)
		return (1);
	if (num % i == 0 && i > 1)
		return (0);
	return (check_prime(num, i - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * unless returns 0
 * @n: Number to be checked
 * 
 * Return: 1 if number is prime number
 * else returns 0
*/

int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (check_prime(n, n - 1));
}
