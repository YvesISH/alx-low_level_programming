#include "main.h"
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	char *xx = "_putchar";

	while (*xx)
	{
		_putchar(*xx);
		xx++;
	}
	_putchar('\n);

	return (0);
}
