#include <stdio.h>

/**
 * main - entry point
 * @void: no parameter
 *
 * Description: accept %d as integer
 * Return: 0 if true
 */

int main(void)
{
	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of an int: %d\n", sizeof(int));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(float));

	return (0);
}
