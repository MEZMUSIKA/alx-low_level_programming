#include "main.h"

/**
 * print_diagonal - drowing diagonal line
 *@n: input number of times to draw '\' 
 */

void print_diagonal(int n)
{
	int li, sp;

	for (li = 0; li < n; li++)
		{
			for (sp = 0; sp < li; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			}
	if (n <= 0)
	{
		_putchar('\n');
	}
}


