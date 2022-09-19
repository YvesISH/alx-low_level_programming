#include "main.h"
/**
 *  * puts2 - function that prints every other character of a string,
 *   * starting with the first character, followed by a new line.
 *    * @str: string.
 *     * Return: Always 0
 */

void puts2(char *str)
{
	int count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
