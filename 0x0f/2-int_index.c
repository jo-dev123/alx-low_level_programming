#include "function_pointers.h"

/**
 * int_index - array with value
 * @array: the array to find index
 * @size: the size of the array
 * @cmp: callback function
 *
 * Return: -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int count;

	if (array != NULL && cmp != NULL)
	{
		i = 1;
		while (i <= size)
		{
			count = cmp(array[i]);
			if (count != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
