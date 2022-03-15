#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: output random numbers
 * Return: 0 if Successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("is zero\n", n);
	if (n < 0)
		printf("is negative\n", n);
	return (0);
}
