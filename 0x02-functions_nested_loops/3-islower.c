/**
 * file : 3-islower.c
 *
 */
#include "main.h"

/**
 * _islower- chrecks if a character is lowercase.
 *
 * Return: 1 if char is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
