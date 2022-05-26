#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print natural numbers from n-98
 * @n: staerting number
 *
 * Return: void (no return value)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	printf("\n");
}
