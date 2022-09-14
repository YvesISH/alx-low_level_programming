#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: int that will use for the argument
 * Return: 0
 */
int print_sign(int n)
{
	int (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
