#include "main.h"

/**
 *  print_line - draw a straight line
 *@n:input of the line to be print
 *  Return:straight line
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
