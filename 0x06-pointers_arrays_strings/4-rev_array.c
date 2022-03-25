#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: first parameter of an array
 * @n: number of elements
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int looper1;
	int store;

	n = n - 1;
	looper = 0;

	while (looper < n)
	{
		store = a[looper1];
		a[looper1] = a[n];
		a[n] = store;
		looper++;
		n--;
	}
}
