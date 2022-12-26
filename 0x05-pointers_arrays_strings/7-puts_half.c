#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int lgs, m, n;
lgs = 0;

	while (str[lgs] != '\0')
	{
		lgs++;
	}
	if (lgs % 2 == 0)
	{
		for (n = lgs / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else if (lgs % 2)
	{
		for (m = (lgs - 1) / 2; m < lgs - 1; m++)
		{
			_putchar(str[m + 1]);
		}
		_putchar('\n');
	}
}



