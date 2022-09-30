#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: charcater
 * Return: thr pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
