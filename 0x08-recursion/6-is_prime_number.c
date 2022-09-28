#include "main.h"
/**
 * is_prime - function that detect inputted nbr
 * @n: number
 * @c: iterator
 * Return: alway 1 or 0
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n , c + 1));
}


/**
 * is_prime_number - returns 1 for prime nbr
 * @n: number
 * Return: always 0 and 1
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
