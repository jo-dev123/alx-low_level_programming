#include "function_pointers.h"

/**
 * print_name - print name
 * @f: pointer to function
 * @name: string name
 *
 * Return: Return string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
