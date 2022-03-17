#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: from lower to uppercase
 * Return: 0 if successful
 */

int main(void)
{
	char cl = "A";
	char lw = "Z";
	char scl = "a";
	char llw = "z";

	while (cl != lw)
	{
		putchar(cl);
		cl++;
	}
	while (scl != llw)
	{
		putchar(scl);
		cl++;
	}
	putchar('\n');
	return (0);
}
