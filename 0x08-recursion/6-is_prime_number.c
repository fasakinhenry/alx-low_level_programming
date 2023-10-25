#include "main.h"

/**
 * check_prime - checks if a number is a prime number
 * @num: number to be checked
 * @i: Iterator
 *
 * Return: if number is a prime number - 1
 * if number is not a prime number - 0
*/

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
