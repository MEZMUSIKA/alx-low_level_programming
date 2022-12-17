#include "main.h"

/**
 * print_diagonal - drowing diagonal line
 *@n: input to draw \ chr
 */

void print_diagonal(int n)
{
	int li, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (li = 1; li <= n; li++)
		{
			for (sp = 1; sp <= li; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}


