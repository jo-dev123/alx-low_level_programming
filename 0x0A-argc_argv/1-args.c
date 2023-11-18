#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}

