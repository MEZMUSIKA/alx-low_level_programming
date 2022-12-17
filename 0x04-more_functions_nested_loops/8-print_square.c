#include "main.h"
#include <stdio.h>

/**
 * print_square - Write a function that prints a square
 *@size: size of the square
 *
 */

void print_square(int size)
{
	int le;
	int we;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (le = 1; le <= size; le++)
		{
			_putchar('#');
			for (we = 2; we <= size; we++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
