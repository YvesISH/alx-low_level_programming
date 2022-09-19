#include "main.h"
/**
 *  * _atoi - function that convert a string to an integer.
 *   * @s: string.
 *    * Return: Always 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (sign *num);
}
