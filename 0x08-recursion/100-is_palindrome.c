#include "main.h"

/**
 * _strlen_recursion - returns length of string using recursion,
 * @s: string parameter to be used
 *
 * Return: Length of the string
 * when there is no string again, returns 0
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - returns length of string using recursion,
 * @a: string parameter to be used
 * @i: iterator for normal string
 * @j: iterator for the string written backwards
 *
 * Return: Length of the string
 * when there is no string again, returns 0
*/

int check_palindrome(char *a, int i, int j)
{
	if (*(a + i) != *(a + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (check_palindrome(a, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to be checked
 *
 * Return: i if a string is palindrome
 * 0 if it is not
*/

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == '\0')
		return (0);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
