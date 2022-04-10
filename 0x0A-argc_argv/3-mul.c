#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: count arguments to program
 * @argv: Array of Pointer to string
 *
 * Description: multiply two arguments
 * Return: intger of sum
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
