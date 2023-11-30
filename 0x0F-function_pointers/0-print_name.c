#include "function_pointers.h"

/**
 * print_name - print name given to it
 * @name: name given to the function
 * @f: pointer to funtion of args pointer to char
 *
 * Return: string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
