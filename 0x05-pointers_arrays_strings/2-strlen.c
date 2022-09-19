#include "main.h"
/**
 *  * _strlen - function that returns the length of a string.
 *   * @s: string.
 *    * Return: Always 0
 */

int _strlen(char *s)
{
	int count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
