#include "function_pointers.h"

/**
 * int_index - arr of value
 * @array: the arr find index
 * @size: the size the array
 * @cmp: callback function
 *
 * Return: -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;
	int cnt;

	if (array != NULL && cmp != NULL)
	{
		itr = 1;
		while (itr <= size)
		{
			cnt = cmp(array[i]);
			if (cnt != 0)
			{
				return (i);
			}
			itr++;
		}
	}
	return (-1);
}
