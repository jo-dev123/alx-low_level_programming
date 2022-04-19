#include "function_pointers.h"

/**
 * array_iterator - function that print a name
 * @array: array
 * @size: size of the array
 * @action: callback function
 *
 * Description: function that prints a name
 * Return: void 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array && action && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
