#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer
 *
 * Return: void
 */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
