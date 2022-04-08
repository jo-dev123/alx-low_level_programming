#include <stdio.h>

/**
 * main - Entry Point
 * @argc: counts arguments of program
 * @argv: array of pointers to string
 *
 * Description: Prints name of program
 * Return: name of program
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
