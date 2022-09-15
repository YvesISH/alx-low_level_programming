#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: tested charcater
 * Return: 1 if it is, 0 otherwwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
