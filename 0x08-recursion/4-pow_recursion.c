#include "main.h"
/**
 * _pow_recursion - Raise x to power of y
 * @x: number
 * @y: number
 * Return: Always a raised number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
