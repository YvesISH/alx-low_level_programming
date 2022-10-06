#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: bytes
 * Return: pointer to the allocated memory else exist
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
