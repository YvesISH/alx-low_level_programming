#include <stdio.h>
int main(void)
{
	int digit1, dig;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (dig = digit1 + 1; dig < 10; dig++)
		{
			putchar((digit1 % 10) + '0');
			putchar((dig % 10) + 0);

			if (digit1 == 8 && dig == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return(0);
}
