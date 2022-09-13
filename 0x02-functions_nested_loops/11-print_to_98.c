#include <stdio.h>
#include "main.h"

/** print_to_98 
 * user input's number print to 98
 * @n: number input
 * Return: Always 0
 */

Void print_to_98(int n)
{
	if (n < 98)
	{

		while (n <= 98)

		{
			printf ("%d", n);
			if (n != 98)
			{
				printf(" . ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf ("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
