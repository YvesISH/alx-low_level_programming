#include "main.h"

/**
 * _isuper - is a functionto check code for uppercase
 * @: charcter to be checked.
 * Return: 1 for upercase, otherwise 0.
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
