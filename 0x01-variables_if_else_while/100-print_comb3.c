#include <stdio.h>
/**
 * main - Entry Point
 * @void: null
 *
 * Description: Write a program that prints all
 * possible different combinations of two digits.
 * Return: int
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

