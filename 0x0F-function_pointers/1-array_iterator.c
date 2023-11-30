#include "function_pointers.h"
/**
 * array_iterator - iterate aunique array list
 * @array: identify array
 * @size: size if the array listed
 * @action:  pointer to the function with args type int you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t itr;

	if (array && size && action)
	{
		for (itr = 0; itr < size; itr++)
			action(array[itr]);
	}
}
