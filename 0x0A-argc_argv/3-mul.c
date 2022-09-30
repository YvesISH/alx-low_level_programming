#include <stdio.h>
#include "main.h"
/**
 * main - prints the multiplication of 2 nt
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 and 1
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
