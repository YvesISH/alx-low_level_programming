#include "main.h"

/**
 * more_numbers - prints numbers o 14
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				_putchar((n2 / 10) + '0');
			}
			_putchar ((n2 % 10) + '0');
		}
		_putchar(10);
	}
}
