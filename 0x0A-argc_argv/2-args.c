#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counting argument
 * @argv: array of pointer to string
 *
 * Description: Prints all arguments including
 * the program itself
 * Return: arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc && i >= 0; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
