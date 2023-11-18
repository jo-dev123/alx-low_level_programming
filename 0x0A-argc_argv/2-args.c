#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prits all arguments
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *(argv++));

	return (EXIT_SUCCESS);
}

