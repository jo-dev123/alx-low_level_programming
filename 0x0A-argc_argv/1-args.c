#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counts programs arguments
 * @argv: array of pointer to strings
 *
 * Description: returns number of argument
 * Return: argc
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
