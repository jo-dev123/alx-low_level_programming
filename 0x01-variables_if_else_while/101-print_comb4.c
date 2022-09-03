#include <stdio.h>
/**
 * main - a program that prints all
 * @void: no parameter
 *
 * Description: this description
 * 012, 120, 102, 021, 201, 210 are considered the
 * same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order,
 * with three digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: int = 0  if treu
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
