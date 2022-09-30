#include <stdlio.h>
#include <stdlib.h>

/**
 * main - program that print the minimum number
 * @argc: number of command line arguments
 * @argv: array that contain the program
 * Return: always 0
 */
int main(iint argc, char *argv[0])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n")
			return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
