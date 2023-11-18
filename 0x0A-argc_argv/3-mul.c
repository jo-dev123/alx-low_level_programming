#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_FAILURE);
}

