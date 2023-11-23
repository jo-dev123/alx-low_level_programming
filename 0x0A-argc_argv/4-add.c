#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding positive arguments and returning an Error if alpha
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: EXIT_SUCCESS or 0
 */

int main(int argc, char **argv)
{
	int adder, str_len, a, b;
	char *store;

	if (argc < 2)
	{
		printf("0\n");
	} else
	{

		adder = 0;

		for (a = 1; a < argc; a++)
		{
			store = argv[a];
			str_len = strlen(store);

			for (b = 0; b < str_len; b++)
			{
				if (isdigit(*(store + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			adder += atoi(argv[a]);

		}
		printf("%d\n", adder);
		return (0);
	}
	return (0);
}
