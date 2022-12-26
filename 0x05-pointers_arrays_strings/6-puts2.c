#include "main.h"

/**
 * puts2 - write a function that prints every other character of a string
 * @str: string to print
 *
 */

void puts2(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
