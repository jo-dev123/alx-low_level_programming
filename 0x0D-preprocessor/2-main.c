#include <stdio.h>

/**
 * main - Entry Point
 * @void: no argument required
 *
 * Description: Write a program that prints
 * the name of the file it was compiled from,
 * followed by a new line
 * Return: 0 if successful, any other number for
 * false
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
