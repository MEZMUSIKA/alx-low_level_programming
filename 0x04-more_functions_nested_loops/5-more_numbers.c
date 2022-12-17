#include "main.h"

/**
 * more_numbers - print the numbers 1-14 10x
 *
 * Return: 0-14
 */

void more_numbers(void)
{
	int c, x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
