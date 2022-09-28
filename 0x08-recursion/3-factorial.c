#include "main.h"
/**
 * factorial - fundtion that returns a factorial number
 * @n: given number
 * Return - always return 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
