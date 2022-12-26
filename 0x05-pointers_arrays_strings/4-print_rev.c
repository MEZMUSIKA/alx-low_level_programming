#include "main.h"
#include <stdio.h>

/**
 * print_rev - Write a function that prints a string, in reverse
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
int k, l, m;

k = 0;

while (s[k] != '\0')
{
	k++;
}
m = k;
for (l = m - 1; l >= 0; l--)
{
	_putchar(s[l]);
}
-putchar('\n');
}
