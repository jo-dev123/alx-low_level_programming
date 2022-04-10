#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counts program argument
 * @argv: Array of Pointers to string
 *
 * Return: 0 if successful, else 1
 */

int main(int argc, char *argv[])
{
	int i, j, len, ad;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		ad = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			ad += atoi(argv[i]);
		}
		printf("%d\n", ad);
	}
	return (0);
}
