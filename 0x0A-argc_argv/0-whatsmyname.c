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

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}

