#include "main.h"
/**
 * _abs - Absolute value of a number
 * @j: the int checked
 * Return: 0
 */
int _abs(int j)
{
	if (j > 0)
		return (j);
	else if (j < 0)
		return (-j);
	else
		return (0);
}
