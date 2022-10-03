#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of chars
 * @size: size of an array
 * @c: char stored
 * Return: ppointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] =  c;

	return (cr);
}
