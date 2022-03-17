#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: all but q and e
 * Return: 0 if successful
 */

int main(void)
{
	char strt = 'a';
	char lst = 'z';

	while (strt <= lst)
	{
		putchar(strt);
		strt++;
		if(strt == 'q' || strt == 'e')
			continue;
	}
}
