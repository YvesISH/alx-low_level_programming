#include <stdio.h>
#include "main.h"

/** print_to_98 - function that prints all natural numbers
 * user input's number print to 98
 * @n: number to be counting at
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
