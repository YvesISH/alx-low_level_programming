#include "main.h"
/**
 * _strlen_recursion - function that returns length
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comaprator - function that compares string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 +1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns string
 * @s: string
 * Retutn: always 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, strlen_recursion(s) - 1));
}
