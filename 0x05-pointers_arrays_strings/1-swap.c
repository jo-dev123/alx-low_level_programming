#include "main.h"

/**
 * swap_int - swap the values of parameter
 * @a: first parameter
 * @b: second parameter
 *
 *
 * Description: swap values of parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}
