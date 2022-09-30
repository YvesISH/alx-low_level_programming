#include "main.h"

/**
 * _isdigit - functions to check if a value is digit
 * @c: value being tested
 * Return: 1 for digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
