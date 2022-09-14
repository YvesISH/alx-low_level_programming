#include "main.h"
#include <stdio.h>
/** 
 *_abs - it computes the absolute value
 *@c: integer input
 *Return: absolute value
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
